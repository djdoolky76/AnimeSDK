#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishLevelGraph; }

#define RPG_GAMECORE_FINISHLEVELGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9450)
#define RPG_GAMECORE_FINISHLEVELGRAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A9460)
#define RPG_GAMECORE_FINISHLEVELGRAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A9420)

namespace RPG::GameCore
{
	class FinishLevelGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MakeOwnerEntityDie; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishLevelGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishLevelGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishLevelGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishLevelGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHLEVELGRAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
