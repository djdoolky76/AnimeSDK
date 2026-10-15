#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMusicJumpConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CE9C0)
#define RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CE750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicJumpConfig_TypeDefinitionIndex = 18519;

	class FiveDimMusicJumpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MusicJumpHeight; // 0x10
		::System::Single MusicAirJumpHeight; // 0x14
		::System::Single TrampolineMusicJumpHeight; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* JumpAudioSwitch; // 0x20
		::System::String* JumpAudioSwitchValue; // 0x28
		::System::String* MusicJumpAudioEvent; // 0x30
		::System::String* MusicAirJumpAudioEvent; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMusicJumpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMusicJumpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICJUMPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
