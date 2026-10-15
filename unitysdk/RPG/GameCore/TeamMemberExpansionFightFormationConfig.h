#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamMemberExpansionFightFormationConfig; }

#define RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7B940)
#define RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7B600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamMemberExpansionFightFormationConfig_TypeDefinitionIndex = 16579;

	class TeamMemberExpansionFightFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 LightMaxTeamMember; // 0x10
		::System::Int32 DarkMaxTeamMember; // 0x14
		::System::Int32 FrontGridNum; // 0x18
		::System::Int32 BackGridNum; // 0x1C
		::System::Single GridMinInterval; // 0x20
		::System::Single GridMaxInterval; // 0x24
		::System::Single BackRowZOffset; // 0x28
		::System::Single BackRowXOffset; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamMemberExpansionFightFormationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamMemberExpansionFightFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMEMBEREXPANSIONFIGHTFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
