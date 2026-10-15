#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NormalTeamFormationServantState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSkillTargetFormation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFormationConfig; }

#define RPG_GAMECORE_SETSKILLTARGETFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93CE0)
#define RPG_GAMECORE_SETSKILLTARGETFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA93D20)
#define RPG_GAMECORE_SETSKILLTARGETFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSkillTargetFormation_TypeDefinitionIndex = 22494;

	class SetSkillTargetFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x20
		::RPG::GameCore::NormalTeamFormationServantState ServantState; // 0x28
		::RPG::MVector3 CenterOffset; // 0x2C
		::System::Boolean IgnoreHitBoxRadius; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single CenterRootYaw; // 0x3C
		::RPG::GameCore::TargetFormationConfig* TargetFormation; // 0x40
		::Il2CppArray<::RPG::GameCore::TargetFormationConfig*>* LeftSideFormations; // 0x48
		::Il2CppArray<::RPG::GameCore::TargetFormationConfig*>* RightSideFormations; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillTargetFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillTargetFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillTargetFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillTargetFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
