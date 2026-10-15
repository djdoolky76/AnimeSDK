#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishFirstPerformance; }

#define RPG_GAMECORE_FINISHFIRSTPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A91C0)
#define RPG_GAMECORE_FINISHFIRSTPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A91D0)
#define RPG_GAMECORE_FINISHFIRSTPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A9190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishFirstPerformance_TypeDefinitionIndex = 21098;

	class FinishFirstPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHFIRSTPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishFirstPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishFirstPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHFIRSTPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishFirstPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishFirstPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHFIRSTPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
