#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MColor.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmGameConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89DEE0)
#define RPG_GAMECORE_MUSICRHYTHMGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89DC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmGameConfig_TypeDefinitionIndex = 16946;

	class MusicRhythmGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single HintOffset; // 0x10
		::System::Single CircleOffset; // 0x14
		::System::Single MissileFlyTime; // 0x18
		::System::Single AdjustInputTime; // 0x1C
		::System::String* AdjustTimeline; // 0x20
		::RPG::MColor TVOnColor; // 0x28
		::RPG::MColor TVOffColor; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
