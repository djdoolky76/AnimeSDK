#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaRoomCardUniqueTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19700)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19710)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA196C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardUniqueTypeConfig_TypeDefinitionIndex = 17825;

	class RogueModifierPersonaRoomCardUniqueTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
