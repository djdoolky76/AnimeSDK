#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RootMotion::FinalIK { class GroundPhysicsHelper_CapsuleCastDelegate; }
namespace RootMotion::FinalIK { class GroundPhysicsHelper_SphereCastDelegate; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode___O_TypeDefinitionIndex = 54768;

	class TurnBasedGameMode___O : public ::System::Object
	{
	public:
		static ::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate** StaticGet__0___BattleSphereCast()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x73740);
		}

		static ::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate** StaticGet__1___BattleCapsuleCast()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x73748);
		}

	};
}
