#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIAllAdjoinCombine; }
namespace RPG::GameCore { class ComplexSkillAISource; }

#define RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59EE90)
#define RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59EEA0)
#define RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59EE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAllAdjoinCombine_TypeDefinitionIndex = 15542;

	class ComplexSkillAIAllAdjoinCombine : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Int32 AdjoinCount; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x18
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
