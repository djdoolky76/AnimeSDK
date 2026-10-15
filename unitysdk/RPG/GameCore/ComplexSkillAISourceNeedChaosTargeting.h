#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceNeedChaosTargeting; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1050)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D1060)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0F90)

namespace RPG::GameCore
{
	class ComplexSkillAISourceNeedChaosTargeting : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTarget; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceNeedChaosTargeting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCENEEDCHAOSTARGETING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
