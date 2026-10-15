#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageRegionPerformancePatch; }

#define RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE66A0)
#define RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE5FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionPerformancePatch_TypeDefinitionIndex = 19193;

	class StageRegionPerformancePatch : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int16 MaxPerObjectShadowCount; // 0x10
		::System::Int16 DecEntityLodQualityPlatform; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRegionPerformancePatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRegionPerformancePatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONPERFORMANCEPATCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
