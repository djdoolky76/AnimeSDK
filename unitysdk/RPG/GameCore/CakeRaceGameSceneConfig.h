#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceGameSceneConfig; }

#define RPG_GAMECORE_CAKERACEGAMESCENECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D550810)
#define RPG_GAMECORE_CAKERACEGAMESCENECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54FDB0)

namespace RPG::GameCore
{
	class CakeRaceGameSceneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CellUnitHeightMm; // 0x10
		::System::UInt32 CellUnitSizeMm; // 0x14
		::System::UInt32 RegionXSize; // 0x18
		::System::UInt32 StartRegionID; // 0x1C
		::System::UInt32 EndRegionID; // 0x20
		::System::UInt32 CatBornZ; // 0x24
		::System::UInt32 CellDropRange; // 0x28
		::System::UInt32 CellDropTransferAddZ; // 0x2C
		::System::UInt32 CellDropInterval; // 0x30
		::System::UInt32 CellDropMaxDuration; // 0x34
		::System::Int32 GravityAcce; // 0x38
		::System::UInt32 SystemMaxSpeed; // 0x3C
		::System::UInt32 PredicateFrameCount; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESCENECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceGameSceneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceGameSceneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESCENECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
