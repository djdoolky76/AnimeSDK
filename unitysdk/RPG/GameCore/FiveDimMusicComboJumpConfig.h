#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMusicComboJumpConfig; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CDA80)
#define RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CD8E0)

namespace RPG::GameCore
{
	class FiveDimMusicComboJumpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BPM; // 0x10
		::System::Single Offset; // 0x14
		::System::Single Tolerance; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LittleGameEvent* OnComboEvent; // 0x20
		::RPG::GameCore::LittleGameEvent* OnMissEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMusicComboJumpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMusicComboJumpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCOMBOJUMPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
