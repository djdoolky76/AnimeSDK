#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActDestroyMiracleAndAddCoinConfig; }

#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96FFB0)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96FFC0)
#define RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96FF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyMiracleAndAddCoinConfig_TypeDefinitionIndex = 19702;

	class RogueActDestroyMiracleAndAddCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActDestroyMiracleAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYMIRACLEANDADDCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
