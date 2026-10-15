#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSelectRoomCardCastResetConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A06F0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0700)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A09C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastResetConfig_TypeDefinitionIndex = 19729;

	class RogueActPersonaSelectRoomCardCastResetConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
