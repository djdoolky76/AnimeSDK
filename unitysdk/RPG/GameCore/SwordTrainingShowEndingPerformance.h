#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingShowEndingPerformance; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4CDF0)
#define RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB4CE00)
#define RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4CDC0)

namespace RPG::GameCore
{
	class SwordTrainingShowEndingPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggered; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotTriggered; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingShowEndingPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingShowEndingPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingShowEndingPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingShowEndingPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
