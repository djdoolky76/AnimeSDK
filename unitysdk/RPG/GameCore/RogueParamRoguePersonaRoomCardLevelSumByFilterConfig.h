#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaRoomCardLevelSumByFilterConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B5170)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B5180)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B5130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomCardLevelSumByFilterConfig_TypeDefinitionIndex = 20178;

	class RogueParamRoguePersonaRoomCardLevelSumByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardLevelSumByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDLEVELSUMBYFILTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
