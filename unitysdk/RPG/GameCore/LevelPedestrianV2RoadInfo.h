#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadInvisibleSegmentInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadPointInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79B8B0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D79B6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadInfo_TypeDefinitionIndex = 17291;

	class LevelPedestrianV2RoadInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadPointInfo*>* RoadPoints; // 0x10
		::System::Single Weight; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DynamicWeightBindFSVName; // 0x20
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadInvisibleSegmentInfo*>* InvisibleSegmentInfoList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2RoadInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2RoadInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
