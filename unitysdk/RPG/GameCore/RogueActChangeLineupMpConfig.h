#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeLineupMpConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96FB90)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96FBA0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96FB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeLineupMpConfig_TypeDefinitionIndex = 19627;

	class RogueActChangeLineupMpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeLineupMpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeLineupMpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeLineupMpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeLineupMpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPMPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
