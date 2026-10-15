#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AISwitchCaseDecision; }
namespace RPG::GameCore { class AISwitchDecisionGroupConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D338E10)
#define RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D338E20)
#define RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33B5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISwitchDecisionGroupConfig_TypeDefinitionIndex = 15485;

	class AISwitchDecisionGroupConfig : public ::RPG::GameCore::AIDecisionBaseConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x28
		::RPG::GameCore::DynamicFloat* Switch; // 0x30
		::Il2CppArray<::RPG::GameCore::AISwitchCaseDecision*>* CaseDecisions; // 0x38
		::RPG::GameCore::AIDecisionUnitConfig* DefaultDecision; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AISwitchDecisionGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AISwitchDecisionGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AISwitchDecisionGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AISwitchDecisionGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISWITCHDECISIONGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
