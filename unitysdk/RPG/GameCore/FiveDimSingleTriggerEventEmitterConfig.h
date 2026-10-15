#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerEventEmitterConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSingleTriggerEventEmitterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AEA30)
#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AEA40)
#define RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AE9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSingleTriggerEventEmitterConfig_TypeDefinitionIndex = 18638;

	class FiveDimSingleTriggerEventEmitterConfig : public ::RPG::GameCore::FiveDimTriggerEventEmitterConfig
	{
	public:
		::System::String* TriggerName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLETRIGGEREVENTEMITTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
