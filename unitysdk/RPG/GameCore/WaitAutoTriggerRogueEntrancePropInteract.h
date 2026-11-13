#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitAutoTriggerRogueEntrancePropInteract; }

#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED52110)
#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED52120)
#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED520E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAutoTriggerRogueEntrancePropInteract_TypeDefinitionIndex = 22486;

	class WaitAutoTriggerRogueEntrancePropInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 NotifyValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
