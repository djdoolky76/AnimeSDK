#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaCurRoomCardCastLevelChangeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20735C40)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20735C50)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20735D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 20095;

	class RogueActPersonaCurRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
