#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByAttributeIDConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE5D0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE5E0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FE7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByAttributeIDConfig_TypeDefinitionIndex = 19879;

	class RoguePersonaRoomCardFilterByAttributeIDConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
