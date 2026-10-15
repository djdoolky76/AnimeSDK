#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaCurRoomCardCastConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99EE80)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99F190)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99EEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastConfig_TypeDefinitionIndex = 19763;

	class RogueActPersonaCurRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
