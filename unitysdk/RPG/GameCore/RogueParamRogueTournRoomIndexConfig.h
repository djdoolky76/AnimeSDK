#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournRoomIndexConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDE80)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FDE90)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomIndexConfig_TypeDefinitionIndex = 19835;

	class RogueParamRogueTournRoomIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
