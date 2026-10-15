#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VoicePlayType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceAudioEventConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEAUDIOEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C9040)
#define RPG_GAMECORE_PERFORMANCEAUDIOEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C8DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceAudioEventConfig_TypeDefinitionIndex = 16390;

	class PerformanceAudioEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SFXExternalCutsceneEvent; // 0x10
		::System::String* SFXExternalCutsceneFadeEvent; // 0x18
		::System::String* SFXExternalStoryEvent; // 0x20
		::System::String* SFXExternalStoryFadeEvent; // 0x28
		::System::String* SFXExternalLoopEvent; // 0x30
		::System::String* SFXExternalLoopStopEvent; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VoicePlayType, ::System::String*>* VoiceTypeExternalEventDict; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEAUDIOEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceAudioEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceAudioEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEAUDIOEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
