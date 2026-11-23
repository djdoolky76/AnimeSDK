#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A718E30D1BD39D5A.h"
#include "unitysdk/F2D5B9AC0649AB47.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define E216FF0F38F8A7D7_F8467F879D3406BB_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3D9AAD0)

inline static constexpr unsigned int E216FF0F38F8A7D7_F8467F879D3406BB_TypeDefinitionIndex = 18836;

struct alignas(8) E216FF0F38F8A7D7_F8467F879D3406BB
{
	::F2D5B9AC0649AB47 B371C21961EE65ED; // 0x10
	::F2D5B9AC0649AB47 FA16ABF9EC1B0B5D; // 0x58
	::F2D5B9AC0649AB47 EB396B9BFDD1B01D; // 0xA0
	::System::Single F0895D445B0C3A94; // 0xE8
	::System::Byte _padding0[0x4];
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> AE8F2CF4A1A5D412; // 0xF0
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> BBB42D5B0801E255; // 0xF8

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E216FF0F38F8A7D7_F8467F879D3406BB_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
