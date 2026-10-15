#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVoxelDataIndex; }
namespace RPG::GameCore { class StageVoxelMetaData; }

#define RPG_GAMECORE_STAGEVOXELMETADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17990)
#define RPG_GAMECORE_STAGEVOXELMETADATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB178E0)

namespace RPG::GameCore
{
	class StageVoxelMetaData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StageVoxelDataIndex* AudioGroundVoxelDataIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELMETADATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVoxelMetaData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVoxelMetaData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELMETADATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
