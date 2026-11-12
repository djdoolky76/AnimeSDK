#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCSoldierLineupPatrol; }

#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4E30)
#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5B4E40)
#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5B4D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCSoldierLineupPatrol_TypeDefinitionIndex = 20336;

	class AdvNPCSoldierLineupPatrol : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
