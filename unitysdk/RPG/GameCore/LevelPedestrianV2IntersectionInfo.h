#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionRoadPathInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryConnectInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryPairInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5680)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C79A0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C7600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionInfo_TypeDefinitionIndex = 17298;

	class LevelPedestrianV2IntersectionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Origin; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::System::Single Radius; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*>* RoadEntries; // 0x30
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*>* RoadConnects; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2RoadEntryPairInfo*>* ForbidRoadEntries; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionRoadPathInfo*>* RoadPathInfo; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
