#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOXEL_VOXELARRAY_BFPFHEOGGEK_OFFSET UNITYSDK_OFFSET(0xEB384F0)
#define MOLEMOLE_VOXEL_VOXELARRAY_BMKAEIPPLEJ_OFFSET UNITYSDK_OFFSET(0xEB38260)
#define MOLEMOLE_VOXEL_VOXELARRAY_DLNIAHNJGEA_OFFSET UNITYSDK_OFFSET(0xEB38600)
#define MOLEMOLE_VOXEL_VOXELARRAY_EBOPFMOBHMF_OFFSET UNITYSDK_OFFSET(0xEB38360)
#define MOLEMOLE_VOXEL_VOXELARRAY_EIMBLGGBOGD_OFFSET UNITYSDK_OFFSET(0xEB383E0)
#define MOLEMOLE_VOXEL_VOXELARRAY_GET_SHOWRAWSIZE_OFFSET UNITYSDK_OFFSET(0xEB38160)
#define MOLEMOLE_VOXEL_VOXELARRAY_SET_SHOWRAWSIZE_OFFSET UNITYSDK_OFFSET(0xEB381C0)
#define MOLEMOLE_VOXEL_VOXELARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xEB381D0)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelArray_TypeDefinitionIndex = 88031;

	class VoxelArray : public ::System::Object
	{
	public:
		::System::Int32 PlaneX; // 0x10
		::System::Int32 PlaneY; // 0x14
		::UnityEngine::Vector2 voxelPrecision; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* spanArray; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* indexArray; // 0x28
		::Il2CppArray<::System::Byte>* rawArray; // 0x30
		::UnityEngine::Vector3Int rawSize; // 0x38
		::System::Int32 indexArrayIndex; // 0x44
		::System::Int32 bottomIndex; // 0x48
		::System::Int32 topIndex; // 0x4C
		::System::Int16 preData; // 0x50
		::System::Byte _padding0[0x2];
		::System::Int32 colIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ShowRawSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_GET_SHOWRAWSIZE_OFFSET))(this);
		}

		::System::Void set_ShowRawSize(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_SET_SHOWRAWSIZE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Byte BMKAEIPPLEJ(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_BMKAEIPPLEJ_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
		}

		static ::System::Int32 EBOPFMOBHMF(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC, ::UnityEngine::Vector3Int OIOANNLOMDP)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_EBOPFMOBHMF_OFFSET))(HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC, OIOANNLOMDP);
		}

		::System::Void EIMBLGGBOGD(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC, ::System::Byte LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_EIMBLGGBOGD_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC, LJBPECKCCEA);
		}

		::System::Void BFPFHEOGGEK(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC, ::System::Byte BPEGDPLGFPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_BFPFHEOGGEK_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC, BPEGDPLGFPO);
		}

		::System::Void DLNIAHNJGEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_DLNIAHNJGEA_OFFSET))(this);
		}
	};
}
