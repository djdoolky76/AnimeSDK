#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureDestroyPropConfig; }

#define RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3B70)
#define RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A3B80)
#define RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A3BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureDestroyPropConfig_TypeDefinitionIndex = 17892;

	class RogueAdventureDestroyPropConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureDestroyPropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureDestroyPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureDestroyPropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureDestroyPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
