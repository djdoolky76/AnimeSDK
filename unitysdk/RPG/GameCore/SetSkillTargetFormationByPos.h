#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NormalTeamFormationServantState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSkillTargetFormationByPos; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFormationPosConfig; }

#define RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC1A30)
#define RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC1A70)
#define RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC19D0)

namespace RPG::GameCore
{
	class SetSkillTargetFormationByPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* CustomTargetType; // 0x20
		::RPG::GameCore::NormalTeamFormationServantState ServantState; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x30
		::RPG::MVector3 CenterOffset; // 0x38
		::System::Boolean IsIncludeTempLeave; // 0x44
		::System::Boolean IgnoreHitBoxRadius; // 0x45
		::System::Boolean SetBodyPartPos; // 0x46
		::System::Boolean BodyPartSortByFormationIndex; // 0x47
		::System::Boolean SyncFormationPos; // 0x48
		::System::Boolean RefreshFormationCenter; // 0x49
		::System::Byte _padding2[0x2];
		::System::Single CenterRootYaw; // 0x4C
		::RPG::GameCore::TargetFormationPosConfig* TargetFormation; // 0x50
		::Il2CppArray<::RPG::GameCore::TargetFormationPosConfig*>* LeftSideFormations; // 0x58
		::Il2CppArray<::RPG::GameCore::TargetFormationPosConfig*>* RightSideFormations; // 0x60
		::RPG::GameCore::TargetEvaluator* SpecifyTargetFormationEntity; // 0x68
		::System::Boolean IgnoreCharacterRootOffset; // 0x70
		::System::Byte _padding3[0x7];
		::Il2CppArray<::System::Single>* DeltaMultiplier; // 0x78
		::RPG::MVector3 FormationDeltaMaxRange; // 0x80
		::RPG::MVector3 FormationDeltaMinRange; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
