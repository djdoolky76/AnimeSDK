#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayerSkillDashCondition; }

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4D40)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A4D50)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A4CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerSkillDashCondition_TypeDefinitionIndex = 18800;

	class FiveDimPlayerSkillDashCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
