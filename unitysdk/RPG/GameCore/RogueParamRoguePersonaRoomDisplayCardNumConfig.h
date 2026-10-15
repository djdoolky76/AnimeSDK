#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaRoomDisplayCardNumConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B240)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B250)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomDisplayCardNumConfig_TypeDefinitionIndex = 19857;

	class RogueParamRoguePersonaRoomDisplayCardNumConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
