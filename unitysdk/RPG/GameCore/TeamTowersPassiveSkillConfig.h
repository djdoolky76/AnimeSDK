#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class GOOGNAIABBN;
namespace RPG::GameCore { class TeamTowersPassiveSkillConfig; }

#define RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7DD60)
#define RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7DC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersPassiveSkillConfig_TypeDefinitionIndex = 21407;

	class TeamTowersPassiveSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::GOOGNAIABBN* OnReachHeightLine; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersPassiveSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersPassiveSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
