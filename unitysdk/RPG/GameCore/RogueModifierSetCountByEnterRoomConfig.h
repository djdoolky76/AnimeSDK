#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByEnterRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ECC30)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ECC40)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ECBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByEnterRoomConfig_TypeDefinitionIndex = 17721;

	class RogueModifierSetCountByEnterRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
