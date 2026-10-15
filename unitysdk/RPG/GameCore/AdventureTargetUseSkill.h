#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureTargetUseSkill; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURETARGETUSESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A04D0)
#define RPG_GAMECORE_ADVENTURETARGETUSESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A0510)
#define RPG_GAMECORE_ADVENTURETARGETUSESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A0470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTargetUseSkill_TypeDefinitionIndex = 20206;

	class AdventureTargetUseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* SkillTargetType; // 0x28
		::System::Boolean IsCombo; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETARGETUSESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTargetUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETARGETUSESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTargetUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETARGETUSESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
