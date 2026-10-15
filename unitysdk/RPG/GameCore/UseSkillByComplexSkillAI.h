#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UseSkillByComplexSkillAI; }

#define RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79560)
#define RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC79570)
#define RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC79520)

namespace RPG::GameCore
{
	class UseSkillByComplexSkillAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean RecoverySkillCD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSkillByComplexSkillAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSkillByComplexSkillAI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSkillByComplexSkillAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSkillByComplexSkillAI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
