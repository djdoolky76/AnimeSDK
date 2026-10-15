#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournCurRoomFloorIdConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B420)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B430)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurRoomFloorIdConfig_TypeDefinitionIndex = 19846;

	class RogueParamRogueTournCurRoomFloorIdConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
