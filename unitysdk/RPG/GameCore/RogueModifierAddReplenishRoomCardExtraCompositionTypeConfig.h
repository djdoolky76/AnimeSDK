#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AFA20)
#define RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9AFA30)
#define RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AF9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig_TypeDefinitionIndex = 17842;

	class RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddReplenishRoomCardExtraCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDREPLENISHROOMCARDEXTRACOMPOSITIONTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
