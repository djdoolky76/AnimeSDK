#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByInDisplayConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE630)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE640)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FE8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByInDisplayConfig_TypeDefinitionIndex = 19872;

	class RoguePersonaRoomCardFilterByInDisplayConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
