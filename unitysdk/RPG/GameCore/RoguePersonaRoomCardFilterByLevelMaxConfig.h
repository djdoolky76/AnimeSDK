#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByLevelMaxConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2BEF0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2BF00)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByLevelMaxConfig_TypeDefinitionIndex = 19870;

	class RoguePersonaRoomCardFilterByLevelMaxConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
