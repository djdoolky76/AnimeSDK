#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_BASEMATTYPE_OFFSET UNITYSDK_OFFSET(0x1310B000)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_COVERMATTYPE_OFFSET UNITYSDK_OFFSET(0x1310B120)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_IEHMHHMKPPD_OFFSET UNITYSDK_OFFSET(0x1310B3F0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_JEBHOFKGJLJ_OFFSET UNITYSDK_OFFSET(0x1310B2B0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_PCIPDLJNLLH_OFFSET UNITYSDK_OFFSET(0x1310B490)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1310B250)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_VoxelData_TypeDefinitionIndex = 63476;

	class MonoTerrainZoneVoxel_VoxelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* posList; // 0x10
		::System::Byte packData; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Vector3>* pos; // 0x20
		::System::Random* rnd; // 0x28
		::System::Int32 curIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType get_baseMatType()
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_BASEMATTYPE_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType get_coverMatType()
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_COVERMATTYPE_OFFSET))(this);
		}

		::System::Void JEBHOFKGJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_JEBHOFKGJLJ_OFFSET))(this);
		}

		::System::Void IEHMHHMKPPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_IEHMHHMKPPD_OFFSET))(this);
		}

		::System::Void PCIPDLJNLLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_PCIPDLJNLLH_OFFSET))(this);
		}
	};
}
