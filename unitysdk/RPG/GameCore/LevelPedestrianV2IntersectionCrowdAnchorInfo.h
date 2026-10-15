#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrowdAnchorInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C6D90)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C6AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionCrowdAnchorInfo_TypeDefinitionIndex = 17310;

	class LevelPedestrianV2IntersectionCrowdAnchorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::System::String* AnimName; // 0x28
		::System::String* FeatureID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdAnchorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdAnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDANCHORINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
