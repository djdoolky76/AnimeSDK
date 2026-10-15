#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondPersonaCurRoomHasAttributeConfig; }

#define RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984AD0)
#define RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984AE0)
#define RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaCurRoomHasAttributeConfig_TypeDefinitionIndex = 19809;

	class RogueCondPersonaCurRoomHasAttributeConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
