#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByAnyConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2BE30)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2BE40)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByAnyConfig_TypeDefinitionIndex = 19876;

	class RoguePersonaRoomCardFilterByAnyConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAnyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
