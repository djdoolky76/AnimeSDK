#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
class ILDNJGBJGPF;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceTargetsViewModel___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::CKCJOCJGHKC*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>** StaticGet__0____DetermineStateForOutOfEngagement()
		{
			return (::System::Func_3<::CKCJOCJGHKC*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>O")->GetStaticField(0x6C9D0);
		}

		static ::System::Func_3<::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>** StaticGet__2____DetermineStateForEngagementSettle()
		{
			return (::System::Func_3<::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>O")->GetStaticField(0x6C9D8);
		}

		static ::System::Func_3<::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>** StaticGet__1____DetermineStateForEngagementMazeOrBattle()
		{
			return (::System::Func_3<::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>O")->GetStaticField(0x6C9E0);
		}

	};
}
