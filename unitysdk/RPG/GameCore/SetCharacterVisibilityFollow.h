#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterVisibilityFollow; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6E700)
#define RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6E710)
#define RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6E6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterVisibilityFollow_TypeDefinitionIndex = 22652;

	class SetCharacterVisibilityFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x20
		::RPG::GameCore::CharacterVisiblityFollowFlag VisibilityFollow; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterVisibilityFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterVisibilityFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterVisibilityFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterVisibilityFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
