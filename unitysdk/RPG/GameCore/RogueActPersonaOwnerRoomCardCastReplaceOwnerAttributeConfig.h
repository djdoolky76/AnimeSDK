#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99F740)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99F750)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99F890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig_TypeDefinitionIndex = 19760;

	class RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastReplaceOwnerAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREPLACEOWNERATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
