#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99F130)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99F140)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99F1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig_TypeDefinitionIndex = 19765;

	class RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
