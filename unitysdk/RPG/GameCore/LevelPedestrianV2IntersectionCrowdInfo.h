#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrowdAnchorInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrowdInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D799350)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D799360)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D799320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionCrowdInfo_TypeDefinitionIndex = 17311;

	class LevelPedestrianV2IntersectionCrowdInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionCrowdAnchorInfo*>* Anchors; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCROWDINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
