#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSelectRoomCardCastSuperConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0730)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0740)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastSuperConfig_TypeDefinitionIndex = 19726;

	class RogueActPersonaSelectRoomCardCastSuperConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
