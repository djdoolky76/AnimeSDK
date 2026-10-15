#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaRoomCardNumByFilterConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B180)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B190)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomCardNumByFilterConfig_TypeDefinitionIndex = 19848;

	class RogueParamRoguePersonaRoomCardNumByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardNumByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDNUMBYFILTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
