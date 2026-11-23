#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A718E30D1BD39D5A.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/F2D5B9AC0649AB47.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define E216FF0F38F8A7D7_BD3DB8D9D2140ED8_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3D83480)

inline static constexpr unsigned int E216FF0F38F8A7D7_BD3DB8D9D2140ED8_TypeDefinitionIndex = 18839;

struct alignas(8) E216FF0F38F8A7D7_BD3DB8D9D2140ED8
{
	::B8C48C8BF406E9BC::EF22C423CB30F1A1<::Unity::Mathematics::float3> F00496C0AE8C5E1F; // 0x10
	::System::Byte _padding0[0x8];
	::F2D5B9AC0649AB47 B9850AFF3DBCC0D9; // 0x20
	::System::Single BB659111ED85F7EB; // 0x68
	::System::Single EA524C600BF62F42; // 0x6C
	::System::Single F6BFB3DF30E0383E; // 0x70
	::System::Byte _padding1[0x4];
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> E6A4F9AF29048266; // 0x78

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E216FF0F38F8A7D7_BD3DB8D9D2140ED8_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
