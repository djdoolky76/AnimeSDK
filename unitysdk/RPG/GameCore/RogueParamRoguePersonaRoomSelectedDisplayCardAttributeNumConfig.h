#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B5350)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B5360)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B5310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig_TypeDefinitionIndex = 20188;

	class RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaRoomSelectedDisplayCardAttributeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMSELECTEDDISPLAYCARDATTRIBUTENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
