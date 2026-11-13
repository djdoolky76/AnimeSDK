#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetupTrainCollectionSystem; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TrainCollectionMissionPerformancePair; }

#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E6400)
#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8E6410)
#define RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8E63D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetupTrainCollectionSystem_TypeDefinitionIndex = 21378;

	class AdvSetupTrainCollectionSystem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainCollectionMissionPerformancePair*>* ColllectionMap; // 0x18
		::RPG::GameCore::PropButtonConfig* ButtonConfig; // 0x20
		::RPG::GameCore::ELevelPerformanceType NoCollectionPerformanceType; // 0x28
		::System::UInt32 NoCollectionPerformanceID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPTRAINCOLLECTIONSYSTEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
