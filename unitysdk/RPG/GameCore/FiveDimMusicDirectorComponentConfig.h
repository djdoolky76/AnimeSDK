#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEffectPreloadConfig; }
namespace RPG::GameCore { class FiveDimMusicComboJumpConfig; }
namespace RPG::GameCore { class FiveDimMusicDirectorComponentConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CDEF0)
#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CDF00)
#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CDEB0)

namespace RPG::GameCore
{
	class FiveDimMusicDirectorComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* ConfigPath; // 0x10
		::System::Boolean StartOnPlayerEnter; // 0x18
		::System::Boolean ResumeUIMenuBGMOnStop; // 0x19
		::System::Boolean SupportLoop; // 0x1A
		::System::Byte _padding0[0x5];
		::RPG::GameCore::LittleGameEvent* OnMusicStart; // 0x20
		::RPG::GameCore::LittleGameEvent* OnMusicStop; // 0x28
		::RPG::GameCore::LittleGameEvent* OnMusicFinish; // 0x30
		::RPG::GameCore::LittleGameEvent* OnMusicPause; // 0x38
		::RPG::GameCore::LittleGameEvent* OnMusicResume; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimEffectPreloadConfig*>* EffectPreloadConfigList; // 0x48
		::RPG::GameCore::FiveDimMusicComboJumpConfig* ComboJumpConfig; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
