#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMiniGameCollectionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C82F0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C81A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameCollectionConfig_TypeDefinitionIndex = 16668;

	class FiveDimMiniGameCollectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CoinDelayDestroyTimeOutEvent; // 0x10
		::System::Single MiniGameScoreMultiplierAddInterval; // 0x18
		::System::Single MiniGameScoreMultiplierAddValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMiniGameCollectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMiniGameCollectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
