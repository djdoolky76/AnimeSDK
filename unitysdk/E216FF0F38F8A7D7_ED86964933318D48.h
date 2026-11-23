#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A718E30D1BD39D5A.h"
#include "unitysdk/F2D5B9AC0649AB47.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define E216FF0F38F8A7D7_ED86964933318D48_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3D9AE90)

inline static constexpr unsigned int E216FF0F38F8A7D7_ED86964933318D48_TypeDefinitionIndex = 18837;

struct alignas(8) E216FF0F38F8A7D7_ED86964933318D48
{
	::F2D5B9AC0649AB47 B9850AFF3DBCC0D9; // 0x10
	::System::Single F0895D445B0C3A94; // 0x58
	::System::Single BB659111ED85F7EB; // 0x5C
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> AE8F2CF4A1A5D412; // 0x60
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> BBB42D5B0801E255; // 0x68
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> BFD7B4DEA10C4D50; // 0x70

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E216FF0F38F8A7D7_ED86964933318D48_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
