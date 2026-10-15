#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerModifierPhase1Perform; }

#define RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC286E0)
#define RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC286F0)
#define RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC28620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerModifierPhase1Perform_TypeDefinitionIndex = 23447;

	class TriggerModifierPhase1Perform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModifierPhase1Perform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModifierPhase1Perform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModifierPhase1Perform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModifierPhase1Perform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERPHASE1PERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
