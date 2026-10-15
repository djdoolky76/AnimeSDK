#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchAudioListenerToCamera; }

#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB11730)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB11740)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB11700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchAudioListenerToCamera_TypeDefinitionIndex = 22250;

	class SwitchAudioListenerToCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchAudioListenerToCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchAudioListenerToCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchAudioListenerToCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchAudioListenerToCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
