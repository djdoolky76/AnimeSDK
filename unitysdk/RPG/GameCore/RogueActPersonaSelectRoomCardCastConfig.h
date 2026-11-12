#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSelectRoomCardCastConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE91D0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE97C0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE92A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastConfig_TypeDefinitionIndex = 20048;

	class RogueActPersonaSelectRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
