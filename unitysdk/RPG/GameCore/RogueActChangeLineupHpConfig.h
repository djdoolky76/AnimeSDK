#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeLineupHpConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D490)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D4A0)
#define RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D450)

namespace RPG::GameCore
{
	class RogueActChangeLineupHpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeLineupHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeLineupHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeLineupHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGELINEUPHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
