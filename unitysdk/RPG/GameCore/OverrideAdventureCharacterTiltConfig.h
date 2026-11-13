#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class OverrideAdventureCharacterTiltConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13A6C0)
#define RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F13A6D0)
#define RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F13A690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideAdventureCharacterTiltConfig_TypeDefinitionIndex = 20857;

	class OverrideAdventureCharacterTiltConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x18
		::RPG::GameCore::DynamicString* OverrideConfigPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEADVENTURECHARACTERTILTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
