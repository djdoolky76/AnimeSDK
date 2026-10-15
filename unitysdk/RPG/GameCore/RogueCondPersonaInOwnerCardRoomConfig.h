#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondPersonaInOwnerCardRoomConfig; }

#define RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2490)
#define RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B24A0)
#define RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaInOwnerCardRoomConfig_TypeDefinitionIndex = 19812;

	class RogueCondPersonaInOwnerCardRoomConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
