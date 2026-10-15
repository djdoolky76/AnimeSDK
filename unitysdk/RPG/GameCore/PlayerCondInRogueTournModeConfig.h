#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerCondInRogueTournModeConfig; }

#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9338E0)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9338F0)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9338A0)

namespace RPG::GameCore
{
	class PlayerCondInRogueTournModeConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
