#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPerformanceReplayEnd; }

#define RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9D2C0)
#define RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9D2D0)
#define RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9D290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPerformanceReplayEnd_TypeDefinitionIndex = 21849;

	class WaitPerformanceReplayEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPerformanceReplayEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPerformanceReplayEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPerformanceReplayEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPerformanceReplayEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
