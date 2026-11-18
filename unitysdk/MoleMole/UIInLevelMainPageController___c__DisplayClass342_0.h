#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GOGADEDMKCC;
namespace MoleMole { class UIInLevelMainPageController; }

#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__DISPLAYCLASS342_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176B7130)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__DISPLAYCLASS342_0___SHOWINLEVELHOLLOWTIP_B__0_OFFSET UNITYSDK_OFFSET(0x176B7140)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMainPageController___c__DisplayClass342_0_TypeDefinitionIndex = 40250;

	class UIInLevelMainPageController___c__DisplayClass342_0 : public ::System::Object
	{
	public:
		::GOGADEDMKCC* tipData; // 0x10
		::MoleMole::UIInLevelMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__DISPLAYCLASS342_0__CTOR_OFFSET))(this);
		}

		::System::Void __ShowInLevelHollowTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__DISPLAYCLASS342_0___SHOWINLEVELHOLLOWTIP_B__0_OFFSET))(this);
		}
	};
}
