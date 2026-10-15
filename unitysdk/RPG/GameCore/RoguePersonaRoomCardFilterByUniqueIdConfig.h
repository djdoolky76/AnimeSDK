#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByUniqueIdConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE6F0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE700)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FEA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByUniqueIdConfig_TypeDefinitionIndex = 19877;

	class RoguePersonaRoomCardFilterByUniqueIdConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
