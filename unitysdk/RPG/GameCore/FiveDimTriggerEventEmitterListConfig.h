#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSingleTriggerEventEmitterConfig; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterListConfig; }

#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E1CD0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E1CE0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E1CA0)

namespace RPG::GameCore
{
	class FiveDimTriggerEventEmitterListConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsTriggerEventEmitterList; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*>* TriggerList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
