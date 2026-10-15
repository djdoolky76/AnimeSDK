#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D971310)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D971320)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D971400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig_TypeDefinitionIndex = 19749;

	class RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastReplaceAttributeByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREPLACEATTRIBUTEBYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
