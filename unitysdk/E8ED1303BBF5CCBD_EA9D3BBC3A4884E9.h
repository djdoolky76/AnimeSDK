#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A718E30D1BD39D5A.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/F2D5B9AC0649AB47.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/F1B6E53C152C2519.h"

#define E8ED1303BBF5CCBD_EA9D3BBC3A4884E9_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3DB84C0)

inline static constexpr unsigned int E8ED1303BBF5CCBD_EA9D3BBC3A4884E9_TypeDefinitionIndex = 18866;

struct alignas(8) E8ED1303BBF5CCBD_EA9D3BBC3A4884E9
{
	::F2D5B9AC0649AB47 B9850AFF3DBCC0D9; // 0x10
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> F4CB8C7451B7A46B; // 0x58
	::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::F1B6E53C152C2519> E40E226C449A4DE1; // 0x60
	::System::Byte _padding0[0x8];
	::A718E30D1BD39D5A<::UnityEngine::F1B6E53C152C2519> E2427814DECC3FB5; // 0x70
	::A718E30D1BD39D5A<::UnityEngine::F1B6E53C152C2519> F0D04B52B0977106; // 0x78
	::System::Single BB659111ED85F7EB; // 0x80
	::Unity::Mathematics::float3 F8243D9F1B631C5C; // 0x84
	::Unity::Mathematics::float3 AAF220D1CE49CB08; // 0x90

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8ED1303BBF5CCBD_EA9D3BBC3A4884E9_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
