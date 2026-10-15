#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeRogueCoinByRandomRangeConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D670)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D680)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinByRandomRangeConfig_TypeDefinitionIndex = 19624;

	class RogueActChangeRogueCoinByRandomRangeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
