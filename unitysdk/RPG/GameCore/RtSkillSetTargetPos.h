#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPosOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/RtSkillSetTargetPosSortRule.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicVector3; }
namespace RPG::GameCore { class RtSkillSetTargetPos; }
namespace RPG::GameCore { class RtTargetFormationPosConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLSETTARGETPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA64980)
#define RPG_GAMECORE_RTSKILLSETTARGETPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA64990)
#define RPG_GAMECORE_RTSKILLSETTARGETPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA64940)

namespace RPG::GameCore
{
	class RtSkillSetTargetPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x28
		::RPG::GameCore::DynamicVector3* Offset; // 0x30
		::RPG::GameCore::RtPosOffsetCoordType OffsetCoord; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* SpecifyCenterTarget; // 0x40
		::RPG::GameCore::RtSkillSetTargetPosSortRule TargetSortRule; // 0x48
		::System::Byte _padding2[0x4];
		::RPG::GameCore::RtTargetFormationPosConfig* TargetFormation; // 0x50
		::Il2CppArray<::RPG::GameCore::RtTargetFormationPosConfig*>* LeftSideFormations; // 0x58
		::Il2CppArray<::RPG::GameCore::RtTargetFormationPosConfig*>* RightSideFormations; // 0x60
		::System::Single ShoveRatio; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLSETTARGETPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillSetTargetPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillSetTargetPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLSETTARGETPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillSetTargetPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillSetTargetPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLSETTARGETPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
