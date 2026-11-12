#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeLineupSpConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE65D0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE65E0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE6590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupSpConfig_TypeDefinitionIndex = 19959;

	class RogueActChangeLineupSpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeLineupSpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeLineupSpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeLineupSpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeLineupSpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPSPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
