#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ThreadSafeRandom_RandomState.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_THREADSAFERANDOM_GETFLOATFROMINT_OFFSET UNITYSDK_OFFSET(0x1F91AB60)
#define FOUNDATION_THREADSAFERANDOM_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x98EE90)
#define FOUNDATION_THREADSAFERANDOM_GET_OFFSET UNITYSDK_OFFSET(0x98EE60)
#define FOUNDATION_THREADSAFERANDOM_RANGE_1_OFFSET UNITYSDK_OFFSET(0x98EDB0)
#define FOUNDATION_THREADSAFERANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0x98ED50)
#define FOUNDATION_THREADSAFERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0x98ED20)
#define FOUNDATION_THREADSAFERANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x98ED20)

namespace Foundation
{
	inline static constexpr unsigned int ThreadSafeRandom_TypeDefinitionIndex = 8950;

	struct alignas(4) ThreadSafeRandom
	{
		::Foundation::ThreadSafeRandom_RandomState _state; // 0x10

		::System::Void _ctor(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM__CTOR_OFFSET))(this, seed);
		}

		::System::Single Range(::System::Single inclusiveMin, ::System::Single inclusiveMax)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_RANGE_OFFSET))(this, inclusiveMin, inclusiveMax);
		}

		::System::Int32 Range_1(::System::Int32 inclusiveMin, ::System::Int32 exclusiveMax)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_RANGE_1_OFFSET))(this, inclusiveMin, exclusiveMax);
		}

		::System::UInt32 Get()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_GET_OFFSET))(this);
		}

		::System::Single GetFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_GETFLOAT_OFFSET))(this);
		}

		::System::Void SetSeed(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_SETSEED_OFFSET))(this, seed);
		}

		static ::System::Single GetFloatFromInt(::System::UInt32 value)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_GETFLOATFROMINT_OFFSET))(value);
		}
	};
}
