#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A718E30D1BD39D5A.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

#define E216FF0F38F8A7D7_E8EEB5C9E718FEFE_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3D83320)

inline static constexpr unsigned int E216FF0F38F8A7D7_E8EEB5C9E718FEFE_TypeDefinitionIndex = 18838;

struct alignas(8) E216FF0F38F8A7D7_E8EEB5C9E718FEFE
{
	::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::B3A7F113FE1DE383> BEBDEC0EBA0BFA61; // 0x10
	::System::Byte _padding0[0x8];
	::B8C48C8BF406E9BC::EF22C423CB30F1A1<::Unity::Mathematics::float3> F00496C0AE8C5E1F; // 0x20
	::System::Byte _padding1[0x8];
	::A718E30D1BD39D5A<::Unity::Mathematics::float3> E6A4F9AF29048266; // 0x30

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E216FF0F38F8A7D7_E8EEB5C9E718FEFE_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
