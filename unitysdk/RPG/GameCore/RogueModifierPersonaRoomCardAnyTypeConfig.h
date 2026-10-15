#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardAnyTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19400)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19410)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA193C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardAnyTypeConfig_TypeDefinitionIndex = 17826;

	class RogueModifierPersonaRoomCardAnyTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardAnyTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDANYTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
