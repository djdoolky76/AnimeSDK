#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureConfigBase; }

#define RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3940)
#define RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A3B60)
#define RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A3950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureConfigBase_TypeDefinitionIndex = 17891;

	class RogueAdventureConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
