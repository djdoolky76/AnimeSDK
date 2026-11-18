#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JOPHFMALNAF;
namespace System { class Action; }

#define MOLEMOLE_UIMAINPLOTINTORSTARTDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19A98CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPlotIntorStartDialogPopWindowController_PanelData_TypeDefinitionIndex = 73881;

	class UIMainPlotIntorStartDialogPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JOPHFMALNAF* TableInfo; // 0x28
		::System::Action* OnClosePanel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPLOTINTORSTARTDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
