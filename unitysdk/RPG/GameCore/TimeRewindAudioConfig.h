#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDAUDIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB86C00)
#define RPG_GAMECORE_TIMEREWINDAUDIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB86A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindAudioConfig_TypeDefinitionIndex = 16605;

	class TimeRewindAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::String* InverseEventName; // 0x18
		::System::Single Duration; // 0x20
		::System::Single AudioDuration; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDAUDIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindAudioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindAudioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDAUDIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
