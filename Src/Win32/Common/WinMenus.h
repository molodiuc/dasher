#ifndef __WinMenus_h__
#define __WinMenus_h__

#include <vector>

#include "../../DasherCore/DasherTypes.h"
#include <Oleacc.h>
using namespace Dasher;
namespace WinMenus {
	BOOL CALLBACK WindowProc(HWND hwnd, LPARAM lParam);

	ControlTree* buildcontroltree();
	ControlTree* buildmovetree(ControlTree* tree);

	ControlTree* buildspeaktree(ControlTree* tree);

	bool ProcessObject(IAccessible* AccessibleObject);

	bool AddObjectToTree(IAccessible* AccessibleObject, ControlTree* TreeParent);
};

#endif