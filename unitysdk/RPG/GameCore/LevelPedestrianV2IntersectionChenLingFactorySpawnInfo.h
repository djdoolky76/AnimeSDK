#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactorySpawnInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D797C10)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D797A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingFactorySpawnInfo_TypeDefinitionIndex = 17303;

	class LevelPedestrianV2IntersectionChenLingFactorySpawnInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxMemberCount; // 0x10
		::System::UInt32 MemberEmitSpeed; // 0x14
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* EnterRoadEntries; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSPAWNINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
