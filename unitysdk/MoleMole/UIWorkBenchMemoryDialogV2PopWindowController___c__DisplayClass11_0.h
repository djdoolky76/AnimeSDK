#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKEMDNDAHNF;
namespace MoleMole { class UIWorkBenchMemoryDialogV2PopWindowController_Context; }
namespace System { class Action; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164E78B0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__0_OFFSET UNITYSDK_OFFSET(0x164E78C0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__1_OFFSET UNITYSDK_OFFSET(0x164E7A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogV2PopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 42596;

	class UIWorkBenchMemoryDialogV2PopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIWorkBenchMemoryDialogV2PopWindowController_Context* context; // 0x18
		::IKEMDNDAHNF* templateData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _SelectedMemory_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__0_OFFSET))(this);
		}

		::System::Void _SelectedMemory_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__1_OFFSET))(this);
		}
	};
}
