#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyDetailPageController; }

#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD3C70)
#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS24_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x14CD3C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyDetailPageController___c__DisplayClass24_0_TypeDefinitionIndex = 77810;

	class UIStrategyDetailPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyDetailPageController* __4__this; // 0x10
		::System::Int32 tabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS24_0__ONUIINIT_B__0_OFFSET))(this);
		}
	};
}
