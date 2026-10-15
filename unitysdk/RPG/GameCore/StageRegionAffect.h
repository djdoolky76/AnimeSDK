#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageRegionAffect; }

#define RPG_GAMECORE_STAGEREGIONAFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13320)
#define RPG_GAMECORE_STAGEREGIONAFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB13210)

namespace RPG::GameCore
{
	class StageRegionAffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetRegionID; // 0x10
		::RPG::GameCore::StageRegionActiveState TargetRegionActiveState; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONAFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRegionAffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRegionAffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONAFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
