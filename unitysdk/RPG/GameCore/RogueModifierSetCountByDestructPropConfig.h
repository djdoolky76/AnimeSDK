#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByDestructPropConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A410)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A420)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByDestructPropConfig_TypeDefinitionIndex = 17716;

	class RogueModifierSetCountByDestructPropConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByDestructPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYDESTRUCTPROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
