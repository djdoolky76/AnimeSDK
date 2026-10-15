#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B060)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B070)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig_TypeDefinitionIndex = 19850;

	class RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
