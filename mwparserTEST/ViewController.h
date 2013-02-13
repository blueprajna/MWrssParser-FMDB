//
//  ViewController.h
//  mwparserTEST
//
//  Created by CheolHyeon Park on 13. 2. 13..
//  Copyright (c) 2013년 CheolHyeon Park. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSString+HTML.h"
#import "MWFeedParser.h"
#import "FMDatabase.h"
#import "FMDatabaseAdditions.h"
#import "FMDatabasePool.h"
#import "FMDatabaseQueue.h"

@interface ViewController : UIViewController<MWFeedParserDelegate> {
    // Parsing
	MWFeedParser *feedParser;
	NSMutableArray *parsedItems;
	
	// Displaying
	
	NSDateFormatter *formatter;
    NSString *dbpath;
    FMDatabase *TDIdb;

}




@end
