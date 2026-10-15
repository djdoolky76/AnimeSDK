#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2RoadPointInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C9790)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C9450)

namespace RPG::GameCore
{
	class LevelPedestrianV2RoadPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Tangent; // 0x1C
		::RPG::MVector3 Normal; // 0x28
		::System::Single Width; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2RoadPointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2RoadPointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADPOINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
