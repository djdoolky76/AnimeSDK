#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NormalTeamFormationServantState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC6A70)
#define RPG_GAMECORE_SETTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC6AC0)
#define RPG_GAMECORE_SETTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC6A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeamFormation_TypeDefinitionIndex = 22913;

	class SetTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* FormationTarget; // 0x20
		::RPG::GameCore::TeamFormationType FormationType; // 0x28
		::RPG::GameCore::NormalTeamFormationServantState ServantState; // 0x2C
		::System::String* FormationConfigName; // 0x30
		::System::Boolean RemoveDying; // 0x38
		::System::Byte _padding1[0x7];
		::System::String* CustomFormationName; // 0x40
		::System::Boolean UseLevelAreaRoot; // 0x48
		::System::Byte _padding2[0x7];
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x50
		::System::Boolean CustomFormationIgnoreDying; // 0x58
		::System::Boolean ImmediatelyStopHeadLookAt; // 0x59
		::System::Boolean RefreshFormationCenter; // 0x5A
		::System::Byte _padding3[0x1];
		::RPG::GameCore::TeamMemberCountingOption TeamMemberCountingOption; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
