#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20735C00)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20735C10)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20735C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig_TypeDefinitionIndex = 20097;

	class RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDAPPENDATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
