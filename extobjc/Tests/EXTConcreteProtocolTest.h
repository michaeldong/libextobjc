//
//  EXTConcreteProtocolTest.h
//  extobjc
//
//  Created by Justin Spahr-Summers on 2010-11-09.
//  Released into the public domain.
//

#import <SenTestingKit/SenTestingKit.h>
#import "extobjc.h"

@protocol MyProtocol <NSObject>
@concrete
+ (NSUInteger)meaningfulNumber;
- (NSString *)getSomeString;
@end

@protocol SubProtocol <MyProtocol>
@concrete
- (void)additionalMethod;
@end

@interface EXTConcreteProtocolTest : SenTestCase {

}

- (void)testImplementations;
- (void)testSimpleInheritance;
- (void)testClassInheritanceWithProtocolInheritance;

@end
