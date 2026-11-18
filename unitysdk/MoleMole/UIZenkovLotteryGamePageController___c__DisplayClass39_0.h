#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0A410)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS39_0__ONCLICKREWARDDIALOGITEM_B__0_OFFSET UNITYSDK_OFFSET(0x12C0A420)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController___c__DisplayClass39_0_TypeDefinitionIndex = 57265;

	class UIZenkovLotteryGamePageController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Int32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickRewardDialogItem_b__0(::DEDDPKGLKHI_LODLFMBCLAH x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS39_0__ONCLICKREWARDDIALOGITEM_B__0_OFFSET))(this, x);
		}
	};
}
