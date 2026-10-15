#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVoxelDataIndex; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEVOXELDATAINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB178A0)
#define RPG_GAMECORE_STAGEVOXELDATAINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB17390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVoxelDataIndex_TypeDefinitionIndex = 19153;

	class StageVoxelDataIndex : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 DataVersion; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* VFSFileName; // 0x18
		::System::Int32 VFSClusterSize; // 0x20
		::System::Single IntervalX; // 0x24
		::System::Single IntervalY; // 0x28
		::System::Single IntervalZ; // 0x2C
		::System::Int32 MinX; // 0x30
		::System::Int32 MaxX; // 0x34
		::System::Int32 MinY; // 0x38
		::System::Int32 MaxY; // 0x3C
		::System::Int32 MinZ; // 0x40
		::System::Int32 MaxZ; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATAINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVoxelDataIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATAINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
