#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGFBDEFDLAM;
namespace MoleMole { class UIMonsterFantasyEventPrepPageController; }

#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168BEBF0)
#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x168BEC00)
#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x168BEC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyEventPrepPageController___c__DisplayClass6_0_TypeDefinitionIndex = 87089;

	class UIMonsterFantasyEventPrepPageController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::AGFBDEFDLAM* compBtnDataSkin; // 0x10
		::MoleMole::UIMonsterFantasyEventPrepPageController* __4__this; // 0x18
		::AGFBDEFDLAM* compBtnData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__1_OFFSET))(this);
		}
	};
}
