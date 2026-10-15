#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoadRashGameLevelSettings; }
namespace System { class String; }

#define RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96EF30)
#define RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96EF40)
#define RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96EF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameLevelSettings_TypeDefinitionIndex = 17005;

	class RoadRashGameLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::System::UInt32 TrackID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoadRashGameLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoadRashGameLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoadRashGameLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoadRashGameLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
