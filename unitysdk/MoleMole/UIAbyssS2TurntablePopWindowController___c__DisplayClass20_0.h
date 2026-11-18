#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHPCJCILIDA;
namespace MoleMole { class UIAbyssS2TurntablePopWindowController; }

#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19813D90)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKPAYBTN_B__0_OFFSET UNITYSDK_OFFSET(0x19813DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TurntablePopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 91096;

	class UIAbyssS2TurntablePopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2TurntablePopWindowController* __4__this; // 0x10
		::System::UInt32 targetTurntableItemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickPayBtn_b__0(::JHPCJCILIDA* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::JHPCJCILIDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKPAYBTN_B__0_OFFSET))(this, rsp);
		}
	};
}
