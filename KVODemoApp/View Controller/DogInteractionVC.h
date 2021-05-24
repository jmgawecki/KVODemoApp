//
//  ForthVC.h
//  KVODemoApp
//
//  Created by Jakub Gawecki on 22/05/2021.
//

#import <UIKit/UIKit.h>
#import "Person.h"
#import "Dog.h"
//#import "ForthVC+Category.h"

NS_ASSUME_NONNULL_BEGIN

@interface DogInteractionVC : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *dogInfoLabel;
@property (strong, nonatomic) IBOutlet UILabel *dogHungerLabel;

@property (strong, nonatomic) IBOutlet UIButton *feedDogButton;
@property (strong, nonatomic) IBOutlet UIButton *buyDogButton;

@property Person *person;
@property NSNumber *hunger;


-(instancetype)initWithPerson:(Person *)person;


@end

NS_ASSUME_NONNULL_END