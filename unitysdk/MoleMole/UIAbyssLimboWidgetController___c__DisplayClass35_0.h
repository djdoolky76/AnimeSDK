#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssLimboWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BDF400)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__REFRESHSTATE_B__4_OFFSET UNITYSDK_OFFSET(0x14BDF410)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__REFRESHSTATE_B__5_OFFSET UNITYSDK_OFFSET(0x14BDF4B0)
#define MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__REFRESHSTATE_B__6_OFFSET UNITYSDK_OFFSET(0x14BDF540)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLimboWidgetController___c__DisplayClass35_0_TypeDefinitionIndex = 61132;

	class UIAbyssLimboWidgetController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssLimboWidgetController* __4__this; // 0x10
		::System::Action* __9__6; // 0x18
		::System::Action* __9__5; // 0x20
		::System::Int32 playProgressIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshState_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__REFRESHSTATE_B__4_OFFSET))(this);
		}

		::System::Void _RefreshState_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__REFRESHSTATE_B__5_OFFSET))(this);
		}

		::System::Void _RefreshState_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOWIDGETCONTROLLER___C__DISPLAYCLASS35_0__REFRESHSTATE_B__6_OFFSET))(this);
		}
	};
}
