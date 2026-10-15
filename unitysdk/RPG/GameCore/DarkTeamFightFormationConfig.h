#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DarkTeamFightFormationConfig; }
namespace RPG::GameCore { class DarkTeamFightFormationParams; }
namespace System { class String; }

#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C6A80)
#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C66D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DarkTeamFightFormationConfig_TypeDefinitionIndex = 16580;

	class DarkTeamFightFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DarkTeamFightFormationParams* DefaultConfig; // 0x10
		::System::Int32 MaxLocationCount; // 0x18
		::System::Single RowZOffset; // 0x1C
		::System::Single MultiRowGlobalWidthRatio; // 0x20
		::System::Single ReadyStateBackRowOffsetRatio; // 0x24
		::System::Single MultiRowComfortZoneWidth; // 0x28
		::System::Single MultiRowZOffsetApplyRatio; // 0x2C
		::System::Single MultiRowFrontRowDitherDuration; // 0x30
		::System::Single BackRowHightlightWidthRaido; // 0x34
		::System::String* BackRowHightlightColor; // 0x38
		::System::String* BackRowHightlightColor2; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DarkTeamFightFormationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DarkTeamFightFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
