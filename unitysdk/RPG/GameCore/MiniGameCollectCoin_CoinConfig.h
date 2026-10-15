#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniGameCollectCoin_CoinConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MINIGAMECOLLECTCOIN_COINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8809F0)
#define RPG_GAMECORE_MINIGAMECOLLECTCOIN_COINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8808C0)

namespace RPG::GameCore
{
	class MiniGameCollectCoin_CoinConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CoinPresetName; // 0x10
		::System::String* CoinTriggerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMECOLLECTCOIN_COINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameCollectCoin_CoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameCollectCoin_CoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMECOLLECTCOIN_COINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
