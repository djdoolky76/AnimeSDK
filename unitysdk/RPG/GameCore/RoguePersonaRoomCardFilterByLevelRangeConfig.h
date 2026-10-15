#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByLevelRangeConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2BF30)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2BF40)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByLevelRangeConfig_TypeDefinitionIndex = 19869;

	class RoguePersonaRoomCardFilterByLevelRangeConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
