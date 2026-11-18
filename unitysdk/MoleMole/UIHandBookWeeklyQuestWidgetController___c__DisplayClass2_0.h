#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFGFGIBNKKN;
class JHACLFNMIKO;
namespace MoleMole { class UIHandBookWeeklyQuestWidgetController; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17858460)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x17858470)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x178584A0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x178584D0)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__4_OFFSET UNITYSDK_OFFSET(0x17858510)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeeklyQuestWidgetController___c__DisplayClass2_0_TypeDefinitionIndex = 68157;

	class UIHandBookWeeklyQuestWidgetController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::JHACLFNMIKO* lockModel; // 0x10
		::MoleMole::UIHandBookWeeklyQuestWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__1_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__2(::CFGFGIBNKKN* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFGFGIBNKKN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__2_OFFSET))(this, entry);
		}

		::System::Void _OnUIInit_b__4(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIINIT_B__4_OFFSET))(this, _);
		}
	};
}
