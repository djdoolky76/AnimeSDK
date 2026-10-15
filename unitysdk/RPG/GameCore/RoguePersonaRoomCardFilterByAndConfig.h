#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByAndConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE570)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE580)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FE730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByAndConfig_TypeDefinitionIndex = 19875;

	class RoguePersonaRoomCardFilterByAndConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
