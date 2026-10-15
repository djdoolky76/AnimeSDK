#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondTournRoomTypeConfig; }

#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984D10)
#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984D20)
#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondTournRoomTypeConfig_TypeDefinitionIndex = 19810;

	class RogueCondTournRoomTypeConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondTournRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondTournRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondTournRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondTournRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
