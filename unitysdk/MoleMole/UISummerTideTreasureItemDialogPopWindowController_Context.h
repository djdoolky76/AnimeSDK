#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IHOHNJDBEIK;
class KGPPDENAECH;
namespace System { class Action; }

#define MOLEMOLE_UISUMMERTIDETREASUREITEMDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1562F590)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureItemDialogPopWindowController_Context_TypeDefinitionIndex = 67043;

	class UISummerTideTreasureItemDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IHOHNJDBEIK* SeafoodConfig; // 0x28
		::System::Action* OnCloseAction; // 0x30
		::KGPPDENAECH* DropItemConfig; // 0x38
		::System::Boolean FromReward; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREITEMDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
