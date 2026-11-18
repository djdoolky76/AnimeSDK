#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKEMDNDAHNF;
namespace MoleMole { class UIWorkBenchMemoryDialogPopWindowController_Context; }
namespace System { class Action; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E80540)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__0_OFFSET UNITYSDK_OFFSET(0x13E80550)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__1_OFFSET UNITYSDK_OFFSET(0x13E806F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 74168;

	class UIWorkBenchMemoryDialogPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIWorkBenchMemoryDialogPopWindowController_Context* context; // 0x18
		::IKEMDNDAHNF* templateData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _SelectedMemory_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__0_OFFSET))(this);
		}

		::System::Void _SelectedMemory_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__1_OFFSET))(this);
		}
	};
}
