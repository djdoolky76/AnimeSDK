#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

#define MESSAGEPACK_INTERNAL_FARMHASH_FETCH32_OFFSET UNITYSDK_OFFSET(0x1DE9EB40)
#define MESSAGEPACK_INTERNAL_FARMHASH_FETCH64_OFFSET UNITYSDK_OFFSET(0x1DE9F280)
#define MESSAGEPACK_INTERNAL_FARMHASH_FMIX_OFFSET UNITYSDK_OFFSET(0x1DE9EB60)
#define MESSAGEPACK_INTERNAL_FARMHASH_H32_OFFSET UNITYSDK_OFFSET(0x1DE9F870)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN0TO4_OFFSET UNITYSDK_OFFSET(0x1DE9EBB0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN13TO24_OFFSET UNITYSDK_OFFSET(0x1DE9EE30)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN5TO12_OFFSET UNITYSDK_OFFSET(0x1DE9ED80)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32_1_OFFSET UNITYSDK_OFFSET(0x1DE9EF00)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32_OFFSET UNITYSDK_OFFSET(0x1DE9EA50)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64NA_OFFSET UNITYSDK_OFFSET(0x1DE9FBE0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64UO_OFFSET UNITYSDK_OFFSET(0x1DE9FEA0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64_1_OFFSET UNITYSDK_OFFSET(0x1DE9F2F0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64_OFFSET UNITYSDK_OFFSET(0x1DE9F240)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN0TO16_OFFSET UNITYSDK_OFFSET(0x1DE9F6F0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN16_OFFSET UNITYSDK_OFFSET(0x1DE9F2C0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN17TO32_OFFSET UNITYSDK_OFFSET(0x1DE9F7F0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN33TO64_OFFSET UNITYSDK_OFFSET(0x1DE9F8F0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN65TO96_OFFSET UNITYSDK_OFFSET(0x1DE9F9F0)
#define MESSAGEPACK_INTERNAL_FARMHASH_H_OFFSET UNITYSDK_OFFSET(0x1DE9FE70)
#define MESSAGEPACK_INTERNAL_FARMHASH_MUR_OFFSET UNITYSDK_OFFSET(0x1DE9EB90)
#define MESSAGEPACK_INTERNAL_FARMHASH_ROTATE32_OFFSET UNITYSDK_OFFSET(0x1DE9EB50)
#define MESSAGEPACK_INTERNAL_FARMHASH_ROTATE64_OFFSET UNITYSDK_OFFSET(0x1DE9F290)
#define MESSAGEPACK_INTERNAL_FARMHASH_SHIFTMIX_OFFSET UNITYSDK_OFFSET(0x1DE9F2B0)
#define MESSAGEPACK_INTERNAL_FARMHASH_SWAP_OFFSET UNITYSDK_OFFSET(0x1DE9F270)
#define MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET UNITYSDK_OFFSET(0x1DE9FBA0)
#define MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_OFFSET UNITYSDK_OFFSET(0x1DE9FB60)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int FarmHash_TypeDefinitionIndex = 29943;

	class FarmHash : public ::System::Object
	{
	public:
		// static const ::System::UInt32 c1 = 0xCC9E2D51; // 0x0
		// static const ::System::UInt32 c2 = 0x1B873593; // 0x0
		// static const ::System::UInt64 k0 = 0xC3A5C85C97CB3127; // 0x0
		// static const ::System::UInt64 k1 = 0xB492B66FBE98F273; // 0x0
		// static const ::System::UInt64 k2 = 0x9AE16A3B2F90404F; // 0x0

		static ::System::UInt32 Hash32(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> bytes)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32_OFFSET))(bytes);
		}

		static ::System::UInt32 Fetch32(::PVOID p)
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_FETCH32_OFFSET))(p);
		}

		static ::System::UInt32 Rotate32(::System::UInt32 val, ::System::Int32 shift)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_ROTATE32_OFFSET))(val, shift);
		}

		static ::System::UInt32 fmix(::System::UInt32 h)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_FMIX_OFFSET))(h);
		}

		static ::System::UInt32 Mur(::System::UInt32 a, ::System::UInt32 h)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_MUR_OFFSET))(a, h);
		}

		static ::System::UInt32 Hash32Len0to4(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> s)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN0TO4_OFFSET))(s);
		}

		static ::System::UInt32 Hash32Len5to12(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN5TO12_OFFSET))(s, len);
		}

		static ::System::UInt32 Hash32Len13to24(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN13TO24_OFFSET))(s, len);
		}

		static ::System::UInt32 Hash32_1(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32_1_OFFSET))(s, len);
		}

		static ::System::UInt64 Hash64(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> bytes)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64_OFFSET))(bytes);
		}

		static ::System::Void swap(::System::UInt64& x, ::System::UInt64& z)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_SWAP_OFFSET))(x, z);
		}

		static ::System::UInt64 Fetch64(::PVOID p)
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_FETCH64_OFFSET))(p);
		}

		static ::System::UInt64 Rotate64(::System::UInt64 val, ::System::Int32 shift)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_ROTATE64_OFFSET))(val, shift);
		}

		static ::System::UInt64 ShiftMix(::System::UInt64 val)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_SHIFTMIX_OFFSET))(val);
		}

		static ::System::UInt64 HashLen16(::System::UInt64 u, ::System::UInt64 v, ::System::UInt64 mul)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN16_OFFSET))(u, v, mul);
		}

		static ::System::UInt64 Hash64_1(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64_1_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen0to16(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN0TO16_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen17to32(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN17TO32_OFFSET))(s, len);
		}

		static ::System::UInt64 H32(::PVOID s, ::System::UInt32 len, ::System::UInt64 mul, ::System::UInt64 seed0, ::System::UInt64 seed1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_H32_OFFSET))(s, len, mul, seed0, seed1);
		}

		static ::System::UInt64 HashLen33to64(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN33TO64_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen65to96(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN65TO96_OFFSET))(s, len);
		}

		static ::System::Void WeakHashLen32WithSeeds(::System::UInt64 w, ::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z, ::System::UInt64 a, ::System::UInt64 b, ::System::UInt64& first, ::System::UInt64& second)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_OFFSET))(w, x, y, z, a, b, first, second);
		}

		static ::System::Void WeakHashLen32WithSeeds_1(::PVOID s, ::System::UInt64 a, ::System::UInt64 b, ::System::UInt64& first, ::System::UInt64& second)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET))(s, a, b, first, second);
		}

		static ::System::UInt64 Hash64NA(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64NA_OFFSET))(s, len);
		}

		static ::System::UInt64 H(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 mul, ::System::Int32 r)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_H_OFFSET))(x, y, mul, r);
		}

		static ::System::UInt64 Hash64UO(::PVOID s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64UO_OFFSET))(s, len);
		}
	};
}
