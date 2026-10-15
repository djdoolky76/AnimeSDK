#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0670)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0680)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig_TypeDefinitionIndex = 19725;

	class RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
