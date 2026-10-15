#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class SetCharacterCustomTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6C800)
#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6C820)
#define RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6C7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterCustomTeamFormation_TypeDefinitionIndex = 22646;

	class SetCharacterCustomTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::CharacterFormationType FormationType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LocationConfig* LocationConfig; // 0x28
		::RPG::GameCore::CharacterFollowOffsetMode FollowOffsetMode; // 0x30
		::System::Boolean DelyRefresh; // 0x34
		::System::Byte _padding1[0x3];
		::RPG::GameCore::DynamicFloat* FollowOffsetTransitionTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERCUSTOMTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
