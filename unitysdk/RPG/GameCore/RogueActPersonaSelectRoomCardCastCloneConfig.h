#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSelectRoomCardCastCloneConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0210)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0220)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A01D0)

namespace RPG::GameCore
{
	class RogueActPersonaSelectRoomCardCastCloneConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
