#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIAllTargetCombine; }
namespace RPG::GameCore { class ComplexSkillAISource; }

#define RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CCC00)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CCAC0)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CCA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAllTargetCombine_TypeDefinitionIndex = 15540;

	class ComplexSkillAIAllTargetCombine : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x10
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAllTargetCombine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAllTargetCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAllTargetCombine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAllTargetCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
