#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D972370)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D972380)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D972440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig_TypeDefinitionIndex = 19739;

	class RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeAndAppendAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGEANDAPPENDATTRIBUTEBYGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
