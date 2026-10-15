#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageRegionLoadType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageRegionConnection; }
namespace RPG::GameCore { class StageVolumeConfigV2; }

#define RPG_GAMECORE_STAGEREGIONCONNECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13EE0)
#define RPG_GAMECORE_STAGEREGIONCONNECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB139E0)

namespace RPG::GameCore
{
	class StageRegionConnection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::StageRegionLoadType LoadType; // 0x14
		::System::Boolean UseRegionV2; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 TargetRegionID; // 0x1C
		::RPG::MVector3 Position; // 0x20
		::System::Int32 DefaultConnectDistance; // 0x2C
		::System::Int32 DefaultHLODAreaDistance; // 0x30
		::System::Int32 DefaultNotConnectDistance; // 0x34
		::System::Single LoadDistance; // 0x38
		::System::Single UnloadDistance; // 0x3C
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* LoadVolumeList; // 0x40
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* UnloadVolumeList; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCONNECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRegionConnection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRegionConnection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCONNECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
