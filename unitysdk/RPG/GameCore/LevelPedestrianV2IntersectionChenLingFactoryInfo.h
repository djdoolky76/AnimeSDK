#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactorySpawnInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4E20)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C4E30)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C4DE0)

namespace RPG::GameCore
{
	class LevelPedestrianV2IntersectionChenLingFactoryInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo* SwitchState; // 0x50
		::RPG::MVector3 SwitchAnchor; // 0x58
		::System::Single SwitchAnchorRadius; // 0x64
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo* SpawnInfo; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
