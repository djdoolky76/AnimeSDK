#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopSummonUnitGameplay; }
namespace System { class String; }

#define RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB26140)
#define RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB26150)
#define RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB26110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopSummonUnitGameplay_TypeDefinitionIndex = 21164;

	class StopSummonUnitGameplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopSummonUnitGameplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopSummonUnitGameplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSUMMONUNITGAMEPLAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
