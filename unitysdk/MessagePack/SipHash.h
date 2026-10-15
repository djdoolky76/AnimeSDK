#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"

#define MESSAGEPACK_SIPHASH_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1BBC06C0)
#define MESSAGEPACK_SIPHASH_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC1260)

namespace MessagePack
{
	inline static constexpr unsigned int SipHash_TypeDefinitionIndex = 7244;

	class SipHash : public ::System::Object
	{
	public:
		::System::UInt64 initialState1; // 0x10
		::System::UInt64 initialState0; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH_CTOR_OFFSET))(this);
		}

		::System::Int64 Compute(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH_COMPUTE_OFFSET))(this, a1);
		}

	};
}
