#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17956AE0)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x17957A80)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__1_OFFSET UNITYSDK_OFFSET(0x17957A90)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelLoseResultPageController___c__DisplayClass13_0_TypeDefinitionIndex = 76137;

	class UILevelLoseResultPageController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__0_OFFSET))(this);
		}

		::System::Void _PlayExit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__1_OFFSET))(this);
		}
	};
}
