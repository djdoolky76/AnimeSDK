#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DarkTeamFightFormationParams; }

#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C6CB0)
#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C6AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DarkTeamFightFormationParams_TypeDefinitionIndex = 16577;

	class DarkTeamFightFormationParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Interval; // 0x10
		::System::Single MinWidth; // 0x14
		::System::Single MaxWidth; // 0x18
		::System::Single MinDistanceToLightTeam; // 0x1C
		::System::Single MaxDistanceToLightTeam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DarkTeamFightFormationParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DarkTeamFightFormationParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
