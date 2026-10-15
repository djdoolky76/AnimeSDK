#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class SetupMapRotationCharger; }

#define RPG_GAMECORE_SETUPMAPROTATIONCHARGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACD5C0)
#define RPG_GAMECORE_SETUPMAPROTATIONCHARGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACD5D0)
#define RPG_GAMECORE_SETUPMAPROTATIONCHARGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACD590)

namespace RPG::GameCore
{
	class SetupMapRotationCharger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* InteractionTriggerName; // 0x18
		::RPG::GameCore::DynamicString* GainEnergyButtonText; // 0x20
		::RPG::GameCore::DynamicString* FillEnergyButtonText; // 0x28
		::RPG::GameCore::DynamicStringList* EnergyEffectAttachPoints; // 0x30
		::RPG::GameCore::DynamicString* EnergyPointEffectPath; // 0x38
		::RPG::GameCore::DynamicString* EnergyTrailEffectPath; // 0x40
		::RPG::GameCore::DynamicString* EnergyTrailEffectTransitPoint; // 0x48
		::RPG::GameCore::DynamicString* InteractableEffectAttachPoint; // 0x50
		::RPG::GameCore::DynamicString* FullEffectPath; // 0x58
		::RPG::GameCore::DynamicString* FullEffectAttachPoint; // 0x60
		::RPG::GameCore::DynamicString* DissolveParamName; // 0x68
		::RPG::GameCore::DynamicString* DissolveAnimState; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONCHARGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupMapRotationCharger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupMapRotationCharger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONCHARGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupMapRotationCharger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupMapRotationCharger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONCHARGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
