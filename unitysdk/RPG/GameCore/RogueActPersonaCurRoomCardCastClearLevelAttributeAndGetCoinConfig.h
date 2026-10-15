#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99EE60)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99EE70)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99EE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig_TypeDefinitionIndex = 19767;

	class RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastClearLevelAttributeAndGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCLEARLEVELATTRIBUTEANDGETCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
