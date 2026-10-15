#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4DD0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C4B00)

namespace RPG::GameCore
{
	class LevelPedestrianV2IntersectionAreaInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LimitPoint; // 0x10
		::RPG::MVector3 LimitDirection; // 0x1C
		::System::Single LimitWidth; // 0x28
		::System::Single LimitDistance; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
