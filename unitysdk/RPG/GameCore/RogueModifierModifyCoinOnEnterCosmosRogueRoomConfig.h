#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA2A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EA2B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EA260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig_TypeDefinitionIndex = 17988;

	class RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
