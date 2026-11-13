#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeChessRogueActionPointConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20733D50)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20733D60)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20733D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueActionPointConfig_TypeDefinitionIndex = 19974;

	class RogueActChangeChessRogueActionPointConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
