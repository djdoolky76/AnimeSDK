#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByLevelMinConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2BF10)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2BF20)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByLevelMinConfig_TypeDefinitionIndex = 19871;

	class RoguePersonaRoomCardFilterByLevelMinConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
