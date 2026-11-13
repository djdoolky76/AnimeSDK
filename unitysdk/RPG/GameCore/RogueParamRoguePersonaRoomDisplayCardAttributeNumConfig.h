#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B5290)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B52A0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B5250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig_TypeDefinitionIndex = 20187;

	class RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
