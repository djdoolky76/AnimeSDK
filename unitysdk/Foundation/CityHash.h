#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/CityHash_Uint128.h"

#define FOUNDATION_CITYHASH_CITYHASH128TO64_OFFSET UNITYSDK_OFFSET(0x1FCC3300)
#define FOUNDATION_CITYHASH_CITYHASH64WITHSEEDS_OFFSET UNITYSDK_OFFSET(0x1FCC3290)
#define FOUNDATION_CITYHASH_CITYHASH64WITHSEED_OFFSET UNITYSDK_OFFSET(0x1FCC3240)
#define FOUNDATION_CITYHASH_CITYHASH64_OFFSET UNITYSDK_OFFSET(0x1FCC2D80)
#define FOUNDATION_CITYHASH_FETCH32_OFFSET UNITYSDK_OFFSET(0x1FCC32F0)
#define FOUNDATION_CITYHASH_FETCH64_OFFSET UNITYSDK_OFFSET(0x1FCC32E0)
#define FOUNDATION_CITYHASH_HASHLEN0TO16_OFFSET UNITYSDK_OFFSET(0x1FCC2AA0)
#define FOUNDATION_CITYHASH_HASHLEN16_1_OFFSET UNITYSDK_OFFSET(0x1FCC2A70)
#define FOUNDATION_CITYHASH_HASHLEN16_OFFSET UNITYSDK_OFFSET(0x1FCC2A40)
#define FOUNDATION_CITYHASH_HASHLEN17TO32_OFFSET UNITYSDK_OFFSET(0x1FCC2BA0)
#define FOUNDATION_CITYHASH_HASHLEN33TO64_OFFSET UNITYSDK_OFFSET(0x1FCC2CA0)
#define FOUNDATION_CITYHASH_ROTATE_OFFSET UNITYSDK_OFFSET(0x1FCC2A10)
#define FOUNDATION_CITYHASH_SHIFTMIX_OFFSET UNITYSDK_OFFSET(0x1FCC2A30)
#define FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET UNITYSDK_OFFSET(0x1FCC2C60)
#define FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_OFFSET UNITYSDK_OFFSET(0x1FCC2C20)

namespace Foundation
{
	inline static constexpr unsigned int CityHash_TypeDefinitionIndex = 8989;

	class CityHash : public ::System::Object
	{
	public:
		static ::System::UInt64 Rotate(::System::UInt64 val, ::System::Int32 shift)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_ROTATE_OFFSET))(val, shift);
		}

		static ::System::UInt64 ShiftMix(::System::UInt64 val)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_SHIFTMIX_OFFSET))(val);
		}

		static ::System::UInt64 HashLen16(::System::UInt64 u, ::System::UInt64 v)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN16_OFFSET))(u, v);
		}

		static ::System::UInt64 HashLen16_1(::System::UInt64 u, ::System::UInt64 v, ::System::UInt64 mul)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN16_1_OFFSET))(u, v, mul);
		}

		static ::System::UInt64 HashLen0To16(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN0TO16_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen17To32(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN17TO32_OFFSET))(s, len);
		}

		static ::Foundation::CityHash_Uint128 WeakHashLen32WithSeeds(::System::UInt64 w, ::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z, ::System::UInt64 a, ::System::UInt64 b)
		{
			return ((::Foundation::CityHash_Uint128(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_OFFSET))(w, x, y, z, a, b);
		}

		static ::Foundation::CityHash_Uint128 WeakHashLen32WithSeeds_1(::PVOID s, ::System::UInt64 a, ::System::UInt64 b)
		{
			return ((::Foundation::CityHash_Uint128(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET))(s, a, b);
		}

		static ::System::UInt64 HashLen33To64(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN33TO64_OFFSET))(s, len);
		}

		static ::System::UInt64 CityHash64(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH64_OFFSET))(s, len);
		}

		static ::System::UInt64 CityHash64WithSeed(::PVOID s, ::System::UInt32 len, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH64WITHSEED_OFFSET))(s, len, seed);
		}

		static ::System::UInt64 CityHash64WithSeeds(::PVOID s, ::System::UInt32 len, ::System::UInt64 seed0, ::System::UInt64 seed1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH64WITHSEEDS_OFFSET))(s, len, seed0, seed1);
		}

		static ::System::UInt64 Fetch64(::PVOID p)
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_FETCH64_OFFSET))(p);
		}

		static ::System::UInt32 Fetch32(::PVOID p)
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_FETCH32_OFFSET))(p);
		}

		static ::System::UInt64 CityHash128To64(::Foundation::CityHash_Uint128& x)
		{
			return ((::System::UInt64(*)(::Foundation::CityHash_Uint128&))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH128TO64_OFFSET))(x);
		}
	};
}
