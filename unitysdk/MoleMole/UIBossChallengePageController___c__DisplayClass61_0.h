#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCBFNKIPOPJ;
class OAEFGCLEHHO;
namespace MoleMole { class UIBossChallengePageController; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAFCE0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS61_0__REFRESHSHOPBTNSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x19FAFCF0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS61_0__REFRESHSHOPBTNSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x19FB03A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController___c__DisplayClass61_0_TypeDefinitionIndex = 83252;

	class UIBossChallengePageController___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::HCBFNKIPOPJ* shopModel; // 0x10
		::MoleMole::UIBossChallengePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshShopBtnState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS61_0__REFRESHSHOPBTNSTATE_B__0_OFFSET))(this);
		}

		::System::Void _RefreshShopBtnState_b__1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS61_0__REFRESHSHOPBTNSTATE_B__1_OFFSET))(this, error);
		}
	};
}
