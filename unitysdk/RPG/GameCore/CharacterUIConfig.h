#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarType.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterUIConfig; }
namespace RPG::GameCore { class EnergyBarConfig; }

#define RPG_GAMECORE_CHARACTERUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57A520)
#define RPG_GAMECORE_CHARACTERUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56F290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterUIConfig_TypeDefinitionIndex = 16547;

	class CharacterUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterHUDType HUDType; // 0x10
		::RPG::GameCore::ActionBarType ActionBarType; // 0x14
		::RPG::GameCore::CrosshairType CrosshairType; // 0x18
		::RPG::GameCore::SpecialSkillButtonGroupType SpecialSkillButtonGroupType; // 0x1C
		::RPG::GameCore::EnergyBarConfig* EnergyBarConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
