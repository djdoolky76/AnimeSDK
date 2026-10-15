#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99F720)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99F730)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99F850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig_TypeDefinitionIndex = 19759;

	class RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
