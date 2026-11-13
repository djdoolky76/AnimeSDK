#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaEnterRandomRoomCardNotSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207A30D0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207A30E0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207A3090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaEnterRandomRoomCardNotSelectConfig_TypeDefinitionIndex = 18008;

	class RogueModifierPersonaEnterRandomRoomCardNotSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
