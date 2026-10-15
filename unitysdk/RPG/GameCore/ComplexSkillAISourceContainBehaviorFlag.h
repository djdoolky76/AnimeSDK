#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceContainBehaviorFlag; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CFED0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CFEE0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CFE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceContainBehaviorFlag_TypeDefinitionIndex = 15523;

	class ComplexSkillAISourceContainBehaviorFlag : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromTarget; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x14
		::RPG::GameCore::ModifierValueType ValueType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCECONTAINBEHAVIORFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
