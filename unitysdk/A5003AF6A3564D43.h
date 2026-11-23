#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/System/ValueType.h"

#define A5003AF6A3564D43__CCTOR_OFFSET UNITYSDK_OFFSET(0x233C760)

inline static constexpr unsigned int A5003AF6A3564D43_TypeDefinitionIndex = 2382;

struct alignas(4) A5003AF6A3564D43
{
	static ::A5003AF6A3564D43* StaticGet_BDC1E8E781853683()
	{
		return (::A5003AF6A3564D43*)Il2CppClass::FromTypeDefinitionIndex(A5003AF6A3564D43_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::E12F55A5FCCCF1EC B40F26237B7F9E5A; // 0x10
	::E12F55A5FCCCF1EC F6A2C1431A53FC68; // 0x18
	::E12F55A5FCCCF1EC B23B7095575DD9E1; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A5003AF6A3564D43__CCTOR_OFFSET))();
	}
};
