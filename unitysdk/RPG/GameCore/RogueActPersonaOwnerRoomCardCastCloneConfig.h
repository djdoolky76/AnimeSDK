#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaOwnerRoomCardCastCloneConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20735F00)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20735F10)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20735EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastCloneConfig_TypeDefinitionIndex = 20088;

	class RogueActPersonaOwnerRoomCardCastCloneConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
