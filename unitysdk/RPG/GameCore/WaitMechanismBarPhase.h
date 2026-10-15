#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitMechanismBarPhase; }

#define RPG_GAMECORE_WAITMECHANISMBARPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9BBB0)
#define RPG_GAMECORE_WAITMECHANISMBARPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9BBC0)
#define RPG_GAMECORE_WAITMECHANISMBARPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9BB70)

namespace RPG::GameCore
{
	class WaitMechanismBarPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::UInt32 Phase; // 0x1C
		::System::Boolean IsEnter; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMECHANISMBARPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
