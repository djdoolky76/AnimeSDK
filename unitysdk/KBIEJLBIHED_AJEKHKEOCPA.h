#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define KBIEJLBIHED_AJEKHKEOCPA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6EBA80)

inline static constexpr unsigned int KBIEJLBIHED_AJEKHKEOCPA_TypeDefinitionIndex = 72544;

struct alignas(8) KBIEJLBIHED_AJEKHKEOCPA
{
	::Unity::Mathematics::float3 FMDLIFKLFKI; // 0x10
	::System::Single CPBECFNOJFG; // 0x1C
	::System::Single HGHCIEEGMLE; // 0x20
	::System::Byte _padding0[0x4];
	::Unity::Collections::NativeArray_1<::System::Byte> PILELGPBCLL; // 0x28

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBIEJLBIHED_AJEKHKEOCPA_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
