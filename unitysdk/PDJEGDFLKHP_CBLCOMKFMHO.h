#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLBGBCAMCH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"

#define PDJEGDFLKHP_CBLCOMKFMHO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6024E0)
#define PDJEGDFLKHP_CBLCOMKFMHO_JLOFEDLFFJL_OFFSET UNITYSDK_OFFSET(0xFDA74B0)

inline static constexpr unsigned int PDJEGDFLKHP_CBLCOMKFMHO_TypeDefinitionIndex = 41207;

struct alignas(8) PDJEGDFLKHP_CBLCOMKFMHO
{
	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> BBGMJNFDBPM; // 0x10
	::System::Byte _padding0[0x8];
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> JGJLIFHFCJE; // 0x20
	::System::Byte _padding1[0x8];
	::Unity::Mathematics::quaternion BAEBNBNJCDC; // 0x30
	::Unity::Mathematics::float3 ADDCBFJBHNC; // 0x40

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_CBLCOMKFMHO_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}

	static ::Unity::Mathematics::float3 JLOFEDLFFJL(::Unity::Mathematics::quaternion EEDDICPIOCN)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_CBLCOMKFMHO_JLOFEDLFFJL_OFFSET))(EEDDICPIOCN);
	}
};
