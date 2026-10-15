#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTopRankedCatSelectorConfig; }

#define RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51EAB0)
#define RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51EAC0)
#define RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D525920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTopRankedCatSelectorConfig_TypeDefinitionIndex = 18393;

	class CakeRaceTopRankedCatSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::UInt32 CatNum; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
