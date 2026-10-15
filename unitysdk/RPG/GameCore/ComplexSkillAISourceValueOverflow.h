#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueOverflowType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceValueOverflow; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4BC0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A4BD0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A4B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValueOverflow_TypeDefinitionIndex = 15528;

	class ComplexSkillAISourceValueOverflow : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueOverflowType OverflowType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValueOverflow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValueOverflow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValueOverflow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValueOverflow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEOVERFLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
