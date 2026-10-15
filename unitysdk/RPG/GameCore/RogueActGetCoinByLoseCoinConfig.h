#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetCoinByLoseCoinConfig; }

#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99DCD0)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99DCE0)
#define RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99DC90)

namespace RPG::GameCore
{
	class RogueActGetCoinByLoseCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetCoinByLoseCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETCOINBYLOSECOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
