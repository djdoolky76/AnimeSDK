#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDAFJHICLOF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1841E240)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__ONPLAYCGEND_B__0_OFFSET UNITYSDK_OFFSET(0x1841E250)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__ONPLAYCGEND_B__1_OFFSET UNITYSDK_OFFSET(0x1841E320)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__ONPLAYCGEND_B__5_OFFSET UNITYSDK_OFFSET(0x1841E430)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass58_0_TypeDefinitionIndex = 78625;

	class UIPerformPageController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIPerformPageController* __4__this; // 0x20
		::EDAFJHICLOF performType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__ONPLAYCGEND_B__0_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__ONPLAYCGEND_B__1_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_0__ONPLAYCGEND_B__5_OFFSET))(this);
		}
	};
}
