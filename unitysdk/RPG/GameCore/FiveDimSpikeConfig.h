#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSpikeConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPIKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AF860)
#define RPG_GAMECORE_FIVEDIMSPIKECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AF870)
#define RPG_GAMECORE_FIVEDIMSPIKECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AF830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpikeConfig_TypeDefinitionIndex = 18592;

	class FiveDimSpikeConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSpike; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::System::String* MovePath; // 0x38
		::RPG::MVector3 ActiveOffset; // 0x40
		::RPG::MVector3 InactiveOffset; // 0x4C
		::System::Single MoveDuration; // 0x58
		::System::Boolean SendEventOnInit; // 0x5C
		::System::Byte _padding1[0x3];
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x68
		::RPG::GameCore::LittleGameEvent* HitEvent; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPIKECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpikeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpikeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPIKECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpikeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpikeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPIKECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
