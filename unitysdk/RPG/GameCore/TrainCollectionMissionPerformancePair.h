#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainCollectionMissionPerformancePair; }

#define RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2C3E0)
#define RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2C270)

namespace RPG::GameCore
{
	class TrainCollectionMissionPerformancePair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14
		::System::UInt32 PerformanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainCollectionMissionPerformancePair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainCollectionMissionPerformancePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINCOLLECTIONMISSIONPERFORMANCEPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
