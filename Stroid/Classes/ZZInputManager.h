//
//  ZZInputManager.h
//  Stroid
//
//  Created by Michael VanLandingham on 3/14/13.
//
//

#ifndef __Stroid__ZZInputManager__
#define __Stroid__ZZInputManager__

#include <iostream>

#endif /* defined(__Stroid__ZZInputManager__) */


/* 
 @class ZZInputManager
 @abstract Manages all forms of input, attempting to abstract away hardware or system details (e.g. touch vs. mouse)
 @discussion We'll see how far we get here in being a generic input interface.  In some cases the app may need to know what kind of input is happening.
 
 Thoughts:
	- A protocol/interface which other classes implement - these would be input devices which 'register' with the InputManager.
	- A way to make an input exclusive.
	- A way to manage multiple streams of input
	- Register actions/callbacks on certain inputs?
	- What threading?
 
*/


class ZZInputManager
{
protected:
	bool nothin;
	
public:
	ZZInputManager();
	~ZZInputManager();
	void registerForInput(void* callback, int value, int type);

};