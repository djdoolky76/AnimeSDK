#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIWeaknessCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceWeaknessCompare; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2770)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D2780)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D2740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceWeaknessCompare_TypeDefinitionIndex = 15522;

	class ComplexSkillAISourceWeaknessCompare : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIWeaknessCompare CounterType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEWEAKNESSCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
