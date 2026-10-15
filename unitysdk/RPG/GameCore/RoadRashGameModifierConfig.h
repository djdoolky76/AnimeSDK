#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoadRashGameModifierConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99C9E0)
#define RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99C9F0)
#define RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99C990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameModifierConfig_TypeDefinitionIndex = 17007;

	class RoadRashGameModifierConfig : public ::RPG::GameCore::LittleGameAbilityConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoadRashGameModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoadRashGameModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoadRashGameModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoadRashGameModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
