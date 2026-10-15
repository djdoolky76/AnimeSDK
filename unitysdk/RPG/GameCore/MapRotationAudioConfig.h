#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationAudioConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82ECB0)
#define RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82EBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationAudioConfig_TypeDefinitionIndex = 17037;

	class MapRotationAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DeployPoseSwitcher; // 0x10
		::System::String* Player3CSpeedRTPC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationAudioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationAudioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
