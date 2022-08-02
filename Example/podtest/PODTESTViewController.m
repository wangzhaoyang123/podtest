//
//  PODTESTViewController.m
//  podtest
//
//  Created by wangzhaoyang123 on 08/02/2022.
//  Copyright (c) 2022 wangzhaoyang123. All rights reserved.
//

#import "PODTESTViewController.h"
#import "LibraryObject.h"
#import <testpod/testpod.h>


@interface PODTESTViewController ()

@end

@implementation PODTESTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    LibraryObject* tm1=[[LibraryObject alloc]init];

    NSString* pod = [tm1 getTitle];
    NSLog(@"pod test = %@",pod);
    
    Podadd* add=[[Podadd alloc]init];

    NSString* addns = [add getTitle];
    NSLog(@"pod test = %@",addns);
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
