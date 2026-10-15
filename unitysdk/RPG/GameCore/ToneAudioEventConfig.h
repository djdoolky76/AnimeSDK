#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ToneAudioEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TONEAUDIOEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC28220)
#define RPG_GAMECORE_TONEAUDIOEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC28080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToneAudioEventConfig_TypeDefinitionIndex = 16391;

	class ToneAudioEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BattleToneEvent; // 0x10
		::System::String* BattleToneStopEvent; // 0x18
		::System::String* LoadingToneEvent; // 0x20
		::System::String* LoadingToneStopEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TONEAUDIOEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToneAudioEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToneAudioEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TONEAUDIOEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
