#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifiyRoomCardForbidRerollConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9C60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9C70)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifiyRoomCardForbidRerollConfig_TypeDefinitionIndex = 17836;

	class RogueModifierModifiyRoomCardForbidRerollConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
