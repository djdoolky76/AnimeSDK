#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishPerformanceMission; }
namespace System { class String; }

#define RPG_GAMECORE_FINISHPERFORMANCEMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67BDE0)
#define RPG_GAMECORE_FINISHPERFORMANCEMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D67BDF0)
#define RPG_GAMECORE_FINISHPERFORMANCEMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D67BDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishPerformanceMission_TypeDefinitionIndex = 21099;

	class FinishPerformanceMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Key; // 0x18
		::System::UInt32 MainMissionID; // 0x20
		::System::Boolean KeepScreenTransferUntilGroupRefresh; // 0x24
		::System::Boolean UseSpecifiedLoading; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::GameCore::LoadingStratageType StratageType; // 0x28
		::RPG::GameCore::TransitionLoadingType LoadingType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCEMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishPerformanceMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishPerformanceMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCEMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishPerformanceMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishPerformanceMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHPERFORMANCEMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
