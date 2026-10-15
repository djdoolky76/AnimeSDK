#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class TriggerEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DC8B0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E18F0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E1790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerEventEmitterConfig_TypeDefinitionIndex = 18637;

	class FiveDimTriggerEventEmitterConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsTriggerEventEmitter; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x18
		::System::Boolean IsPlayerOnly; // 0x20
		::System::Boolean TriggerEventByGuestType; // 0x21
		::System::Byte _padding1[0x2];
		::RPG::GameCore::FiveDimTriggerTargetType TargetType; // 0x24
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* EnterEvents; // 0x28
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* ExitEvents; // 0x30
		::Il2CppArray<::RPG::GameCore::TriggerEventConfig*>* TriggerEventConfigList; // 0x38
		::Il2CppArray<::System::String*>* EnterEventsToGuests; // 0x40
		::Il2CppArray<::System::String*>* ExitEventsToGuests; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
