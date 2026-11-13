#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"

#define SYSTEM_NUMERICS_BITOPERATIONS_GET_LOG2DEBRUIJN_OFFSET UNITYSDK_OFFSET(0x2096CAB0)
#define SYSTEM_NUMERICS_BITOPERATIONS_LOG2SOFTWAREFALLBACK_OFFSET UNITYSDK_OFFSET(0x2096CC00)
#define SYSTEM_NUMERICS_BITOPERATIONS_LOG2_OFFSET UNITYSDK_OFFSET(0x2096CB50)
#define SYSTEM_NUMERICS_BITOPERATIONS_ROUNDUPTOPOWEROF2_OFFSET UNITYSDK_OFFSET(0x2096CA80)

namespace System::Numerics
{
	inline static constexpr unsigned int BitOperations_TypeDefinitionIndex = 6095;

	class BitOperations : public ::System::Object
	{
	public:
		static ::System::UInt32 RoundUpToPowerOf2(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_ROUNDUPTOPOWEROF2_OFFSET))(a1);
		}

		static ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> get_Log2DeBruijn()
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_GET_LOG2DEBRUIJN_OFFSET))();
		}

		static ::System::Int32 Log2(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_LOG2_OFFSET))(a1);
		}

		static ::System::Int32 Log2SoftwareFallback(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_LOG2SOFTWAREFALLBACK_OFFSET))(a1);
		}

	};
}
