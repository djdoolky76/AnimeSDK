#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournRoomLevelConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B780)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B790)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomLevelConfig_TypeDefinitionIndex = 19853;

	class RogueParamRogueTournRoomLevelConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
