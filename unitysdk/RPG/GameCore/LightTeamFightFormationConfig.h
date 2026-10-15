#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class LightTeamFightFormationConfig; }
namespace RPG::GameCore { class LightTeamFightFormationParams; }

#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A1CC0)
#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A1960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightTeamFightFormationConfig_TypeDefinitionIndex = 16578;

	class LightTeamFightFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LightTeamFightFormationParams* DefaultConfig; // 0x10
		::RPG::GameCore::LightTeamFightFormationParams* ExtraConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::CustomTeamFormationConfig*>* ServantCustomTeamFormationConfigs; // 0x20
		::System::Int32 NormalMaxLocationCunt; // 0x28
		::System::Int32 MaxLocationCount; // 0x2C
		::RPG::MVector3 ServantUniformFollowOffset; // 0x30
		::System::Single ServantTeamCenterFollowZOffset; // 0x3C
		::System::Single ServantTeamCenterFollowInterval; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LightTeamFightFormationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LightTeamFightFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
