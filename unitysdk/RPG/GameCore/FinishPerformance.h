#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishPerformance; }

#define RPG_GAMECORE_FINISHPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9710)
#define RPG_GAMECORE_FINISHPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A9720)
#define RPG_GAMECORE_FINISHPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A96E0)

namespace RPG::GameCore
{
	class FinishPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
