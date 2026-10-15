#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersTutorialComponentConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7E300)
#define RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB7E310)
#define RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7E2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersTutorialComponentConfig_TypeDefinitionIndex = 18954;

	class TeamTowersTutorialComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* NodeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersTutorialComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersTutorialComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersTutorialComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersTutorialComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
