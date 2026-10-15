#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LeaveRaid; }

#define RPG_GAMECORE_LEAVERAID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D775A60)
#define RPG_GAMECORE_LEAVERAID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D775A70)
#define RPG_GAMECORE_LEAVERAID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7759A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LeaveRaid_TypeDefinitionIndex = 21615;

	class LeaveRaid : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVERAID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LeaveRaid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LeaveRaid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVERAID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LeaveRaid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LeaveRaid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVERAID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
