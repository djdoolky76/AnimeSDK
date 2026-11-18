#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOMOGMKENJC;
class EFNEBEIKKLM;
namespace MoleMole { class UIZenkovLotteryGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EABA40)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x13EABA50)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__2_OFFSET UNITYSDK_OFFSET(0x13EAC720)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController___c__DisplayClass67_0_TypeDefinitionIndex = 57266;

	class UIZenkovLotteryGamePageController___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovLotteryGamePageController* __4__this; // 0x10
		::DOMOGMKENJC* nextResult; // 0x18
		::System::Action* __9__2; // 0x20
		::System::UInt32 nextResultItemId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendRequest_b__0(::EFNEBEIKKLM* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::EFNEBEIKKLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__0_OFFSET))(this, rsp);
		}

		::System::Void _SendRequest_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS67_0__SENDREQUEST_B__2_OFFSET))(this);
		}
	};
}
