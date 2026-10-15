#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOMDMAGLLNI;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditViewModel; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC96FEE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0__SUBMITCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xC9702E0)

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceTeamEditViewModel___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel* __4__this; // 0x10
		::FOMDMAGLLNI* plan; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SubmitChange_b__0(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0__SUBMITCHANGE_B__0_OFFSET))(this, a1);
		}

	};
}
