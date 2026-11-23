#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/F2D5B9AC0649AB47.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define E216FF0F38F8A7D7_A8FF6C21FF8E32FC_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3D9B430)

inline static constexpr unsigned int E216FF0F38F8A7D7_A8FF6C21FF8E32FC_TypeDefinitionIndex = 18835;

struct alignas(8) E216FF0F38F8A7D7_A8FF6C21FF8E32FC
{
	::F2D5B9AC0649AB47 B9850AFF3DBCC0D9; // 0x10
	::B8C48C8BF406E9BC::EF22C423CB30F1A1<::System::Single> BACF70C6EA40C6A7; // 0x58
	::System::Byte _padding0[0x8];
	::B8C48C8BF406E9BC::EF22C423CB30F1A1<::Unity::Mathematics::float3> F4CB8C7451B7A46B; // 0x68
	::System::Byte _padding1[0x8];
	::B8C48C8BF406E9BC::EF22C423CB30F1A1<::Unity::Mathematics::float3> BFD7B4DEA10C4D50; // 0x78

	::System::Void BAF1A5AD9A18D2CF(::System::Int32 FC300ADBDFF24726)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E216FF0F38F8A7D7_A8FF6C21FF8E32FC_BAF1A5AD9A18D2CF_OFFSET))(this, FC300ADBDFF24726);
	}
};
