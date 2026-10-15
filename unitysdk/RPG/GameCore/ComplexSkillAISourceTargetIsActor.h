#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceTargetIsActor; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2010)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D2020)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D1F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceTargetIsActor_TypeDefinitionIndex = 15550;

	class ComplexSkillAISourceTargetIsActor : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
