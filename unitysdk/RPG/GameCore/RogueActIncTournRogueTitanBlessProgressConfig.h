#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActIncTournRogueTitanBlessProgressConfig; }

#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E5E0)
#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E5F0)
#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActIncTournRogueTitanBlessProgressConfig_TypeDefinitionIndex = 19704;

	class RogueActIncTournRogueTitanBlessProgressConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
