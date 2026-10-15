#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharmUseSkill; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARMUSESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57A6B0)
#define RPG_GAMECORE_CHARMUSESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57A6F0)
#define RPG_GAMECORE_CHARMUSESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57A640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharmUseSkill_TypeDefinitionIndex = 23666;

	class CharmUseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* SkillTargetType; // 0x28
		::System::Boolean DisableSPAdd; // 0x30
		::System::Boolean DisableBPAdd; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARMUSESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharmUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharmUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARMUSESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharmUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharmUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARMUSESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
