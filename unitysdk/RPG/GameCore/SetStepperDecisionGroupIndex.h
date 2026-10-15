#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetStepperDecisionGroupIndex; }
namespace System { class String; }

#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC3130)
#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC3140)
#define RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC3100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStepperDecisionGroupIndex_TypeDefinitionIndex = 22742;

	class SetStepperDecisionGroupIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x18
		::RPG::GameCore::DynamicFloat* NextIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStepperDecisionGroupIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStepperDecisionGroupIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTEPPERDECISIONGROUPINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
