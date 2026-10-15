#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterFollowAnimState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERFOLLOWANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5714B0)
#define RPG_GAMECORE_CHARACTERFOLLOWANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5714C0)
#define RPG_GAMECORE_CHARACTERFOLLOWANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D571470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterFollowAnimState_TypeDefinitionIndex = 22426;

	class CharacterFollowAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimStateName; // 0x20
		::RPG::GameCore::TargetEvaluator* FollowTargetType; // 0x28
		::System::String* FollowTargetAnimStateName; // 0x30
		::System::Single FollowDelay; // 0x38
		::System::Single TransitionDuration; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFOLLOWANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterFollowAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterFollowAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFOLLOWANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterFollowAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterFollowAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFOLLOWANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
