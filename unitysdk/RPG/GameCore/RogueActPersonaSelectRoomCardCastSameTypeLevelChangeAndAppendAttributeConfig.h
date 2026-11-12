#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE9780)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE9790)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE9A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig_TypeDefinitionIndex = 20058;

	class RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
