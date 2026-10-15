#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyReplenishRoomCardCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EAD80)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EAD90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EAD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReplenishRoomCardCountConfig_TypeDefinitionIndex = 17841;

	class RogueModifierModifyReplenishRoomCardCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReplenishRoomCardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREPLENISHROOMCARDCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
