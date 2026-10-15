#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceValueEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4870)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A4880)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A47B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValueEvaluator_TypeDefinitionIndex = 15518;

	class ComplexSkillAISourceValueEvaluator : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
