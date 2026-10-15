#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace RPG::GameCore { class LittleGamePresetConfigs; }

#define RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E5820)
#define RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E5700)

namespace RPG::GameCore
{
	class LittleGamePresetConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LittleGameEntityPreset*>* Presets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGamePresetConfigs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGamePresetConfigs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCONFIGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
