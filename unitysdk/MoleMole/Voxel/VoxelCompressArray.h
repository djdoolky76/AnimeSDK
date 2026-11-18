#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFAMIFEOLN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace MoleMole::Voxel { class VoxelCompressCell; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_BFHMPKLEILP_OFFSET UNITYSDK_OFFSET(0xEB3A1B0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_BMKAEIPPLEJ_OFFSET UNITYSDK_OFFSET(0xEB38FD0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_BPLCGIEIPLI_OFFSET UNITYSDK_OFFSET(0xEB39240)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_DFKGACCOGBA_OFFSET UNITYSDK_OFFSET(0xEB39EB0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_DKDFBIIOBLI_OFFSET UNITYSDK_OFFSET(0xEB38CE0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_DLNIAHNJGEA_OFFSET UNITYSDK_OFFSET(0xEB386A0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_EIMBLGGBOGD_OFFSET UNITYSDK_OFFSET(0xEB394F0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0xEB38920)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_GLBEPMGJFJK_OFFSET UNITYSDK_OFFSET(0xEB38980)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_HEEFIKLPFHO_OFFSET UNITYSDK_OFFSET(0xEB39920)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_LEPJLIGOIBK_OFFSET UNITYSDK_OFFSET(0xEB39730)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_MAPMNIHIHFD_OFFSET UNITYSDK_OFFSET(0xEB39470)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_MLLIJNBNNBL_OFFSET UNITYSDK_OFFSET(0xEB39C90)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_MNOMIMFLPMI_OFFSET UNITYSDK_OFFSET(0xEB39FD0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_NCMHANLPCHN_OFFSET UNITYSDK_OFFSET(0xEB392C0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_OOBNLNPPJJF_OFFSET UNITYSDK_OFFSET(0xEB38B60)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xEB38640)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelCompressArray_TypeDefinitionIndex = 41309;

	class VoxelCompressArray : public ::System::Object
	{
	public:
		// static const ::System::Int32 cacheVoxelCount = 0x10; // 0x0
		::UnityEngine::Vector3Int cellCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::EMFAMIFEOLN>* decompressedData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cellIndexToDataMap; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* cachedIndexList; // 0x30
		::System::Int32 bufferSize; // 0x38
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* decompressedRawArray; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Voxel::VoxelCompressCell*>* compressedRawArray; // 0x48
		::UnityEngine::Vector3Int rawSize; // 0x50
		::UnityEngine::Vector3Int cellSize; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY__CTOR_OFFSET))(this);
		}

		::System::Void DLNIAHNJGEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_DLNIAHNJGEA_OFFSET))(this);
		}

		::System::Boolean FFCPIEDHBDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_FFCPIEDHBDP_OFFSET))(this);
		}

		::System::Int32 GLBEPMGJFJK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_GLBEPMGJFJK_OFFSET))(this);
		}

		::System::Void OOBNLNPPJJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_OOBNLNPPJJF_OFFSET))(this);
		}

		::System::Byte BMKAEIPPLEJ(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_BMKAEIPPLEJ_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
		}

		::System::Void EIMBLGGBOGD(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC, ::System::Byte LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_EIMBLGGBOGD_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC, LJBPECKCCEA);
		}

		::System::Int32 BPLCGIEIPLI(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_BPLCGIEIPLI_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
		}

		::System::Void LEPJLIGOIBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_LEPJLIGOIBK_OFFSET))(this);
		}

		::System::Void NCMHANLPCHN(::System::Int32 AEPEPHHADNP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_NCMHANLPCHN_OFFSET))(this, AEPEPHHADNP);
		}

		::System::Void HEEFIKLPFHO(::System::Int32 AEPEPHHADNP, ::System::Int32 BLLFDNELNMF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_HEEFIKLPFHO_OFFSET))(this, AEPEPHHADNP, BLLFDNELNMF);
		}

		::System::Byte MLLIJNBNNBL(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_MLLIJNBNNBL_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
		}

		::Il2CppArray<::System::Byte>* DKDFBIIOBLI(::System::Int32 AEPEPHHADNP)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_DKDFBIIOBLI_OFFSET))(this, AEPEPHHADNP);
		}

		::System::Void DFKGACCOGBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_DFKGACCOGBA_OFFSET))(this);
		}

		::System::Void MNOMIMFLPMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_MNOMIMFLPMI_OFFSET))(this);
		}

		::System::Int32 MAPMNIHIHFD(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_MAPMNIHIHFD_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
		}

		::System::Byte BFHMPKLEILP(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32 IJKOLMELBBC)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_BFHMPKLEILP_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, IJKOLMELBBC);
		}
	};
}
