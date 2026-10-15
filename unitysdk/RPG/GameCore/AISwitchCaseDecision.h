#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AISwitchCaseDecision; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_AISWITCHCASEDECISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30DAC0)
#define RPG_GAMECORE_AISWITCHCASEDECISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30D980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISwitchCaseDecision_TypeDefinitionIndex = 15484;

	class AISwitchCaseDecision : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Case; // 0x10
		::RPG::GameCore::AIDecisionUnitConfig* Decision; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHCASEDECISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AISwitchCaseDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AISwitchCaseDecision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHCASEDECISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
