#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class LevelSpatialIntVec2; }

#define AHMDKMBDJKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define AHMDKMBDJKJ_DOFGGENDANE_OFFSET UNITYSDK_OFFSET(0x3C36360)
#define AHMDKMBDJKJ_ENJMGHJMNLN_OFFSET UNITYSDK_OFFSET(0x3C363B0)
#define AHMDKMBDJKJ_GAOGCNJJNFN_OFFSET UNITYSDK_OFFSET(0x3C36330)
#define AHMDKMBDJKJ_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define AHMDKMBDJKJ_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define AHMDKMBDJKJ_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define AHMDKMBDJKJ_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C36430)
#define AHMDKMBDJKJ_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define AHMDKMBDJKJ_NFCMLNOIFDH_OFFSET UNITYSDK_OFFSET(0x3C363E0)

	struct alignas(8) AHMDKMBDJKJ
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_DISPOSE_OFFSET))(this);
		}

		::System::Int16 GAOGCNJJNFN()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_GAOGCNJJNFN_OFFSET))(this);
		}

		::System::Void DOFGGENDANE(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_DOFGGENDANE_OFFSET))(this, a1);
		}

		::System::Int16 ENJMGHJMNLN()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_ENJMGHJMNLN_OFFSET))(this);
		}

		::System::Void NFCMLNOIFDH(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_NFCMLNOIFDH_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelSpatialIntVec2* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::LevelSpatialIntVec2*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMDKMBDJKJ_GFLKJLOFIPA_OFFSET))(this);
		}

	};
