#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyPersonaRoomContentIDConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EAB40)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EAB50)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EAB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomContentIDConfig_TypeDefinitionIndex = 17797;

	class RogueModifierModifyPersonaRoomContentIDConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
