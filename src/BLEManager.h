#import <Foundation/Foundation.h>
#import <IOBluetooth/IOBluetooth.h>

#include <string>
#include <vector>

#include "Noble.h"

@interface BLEManager : NSObject <CBCentralManagerDelegate> {
  dispatch_queue_t _dispatchQueue;
  Noble *_noble;
}

- (id)initWithNoble:(Noble *)noble;
- (void)startScanningForServices:(std::vector<std::string>)services allowDuplicates:(bool)allowDuplicates;
- (void)stopScanning;

@end

@interface BLEManager () 

@property (nonatomic, retain) CBCentralManager *centralManager;

@end