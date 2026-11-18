#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x1EA39CD0)
#define STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x1EA39DA0)
#define STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_3_OFFSET UNITYSDK_OFFSET(0x1EA39E10)
#define STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_4_OFFSET UNITYSDK_OFFSET(0x1EA39ED0)
#define STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_5_OFFSET UNITYSDK_OFFSET(0x1EA39F90)
#define STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_6_OFFSET UNITYSDK_OFFSET(0x1EA3A650)
#define STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1EA39C00)
#define STANDART_HASH_XXHASH_XXHASH32_UNSAFECOMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1EA3A790)
#define STANDART_HASH_XXHASH_XXHASH32_XXH32_AVALANCHE_OFFSET UNITYSDK_OFFSET(0x1EA39910)
#define STANDART_HASH_XXHASH_XXHASH32_XXH32_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EA39990)
#define STANDART_HASH_XXHASH_XXHASH32_XXH32_OFFSET UNITYSDK_OFFSET(0x1EA39340)
#define STANDART_HASH_XXHASH_XXHASH32_XXH32_ROUND_OFFSET UNITYSDK_OFFSET(0x1EA398A0)
#define STANDART_HASH_XXHASH_XXHASH32_XXH_ROTL32_OFFSET UNITYSDK_OFFSET(0x1EA39330)
#define STANDART_HASH_XXHASH_XXHASH32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3A800)
#define STANDART_HASH_XXHASH_XXHASH32___INLINE__XXH32_OFFSET UNITYSDK_OFFSET(0x1EA38B20)
#define STANDART_HASH_XXHASH_XXHASH32___INLINE__XXH32_STREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EA39060)
#define STANDART_HASH_XXHASH_XXHASH32___INLINE__XXH32_STREAM_PROCESS_OFFSET UNITYSDK_OFFSET(0x1EA38EF0)

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int xxHash32_TypeDefinitionIndex = 8078;

	class xxHash32 : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_XXH_PRIME32_3()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash32_TypeDefinitionIndex)->GetStaticField(0x3A00);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_2()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash32_TypeDefinitionIndex)->GetStaticField(0x3A04);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash32_TypeDefinitionIndex)->GetStaticField(0x3A08);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_4()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash32_TypeDefinitionIndex)->GetStaticField(0x3A0C);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_5()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash32_TypeDefinitionIndex)->GetStaticField(0x3A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32__CCTOR_OFFSET))();
		}

		static ::System::UInt32 __inline__XXH32(::PVOID input, ::System::Int32 len, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32___INLINE__XXH32_OFFSET))(input, len, seed);
		}

		static ::System::Void __inline__XXH32_stream_process(::Il2CppArray<::System::Byte>* input, ::System::Int32 len, ::System::UInt32& v1, ::System::UInt32& v2, ::System::UInt32& v3, ::System::UInt32& v4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32___INLINE__XXH32_STREAM_PROCESS_OFFSET))(input, len, v1, v2, v3, v4);
		}

		static ::System::UInt32 __inline__XXH32_stream_finalize(::Il2CppArray<::System::Byte>* input, ::System::Int32 len, ::System::UInt32& v1, ::System::UInt32& v2, ::System::UInt32& v3, ::System::UInt32& v4, ::System::Int64 length, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32___INLINE__XXH32_STREAM_FINALIZE_OFFSET))(input, len, v1, v2, v3, v4, length, seed);
		}

		static ::System::UInt32 XXH_rotl32(::System::UInt32 x, ::System::Int32 r)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_XXH_ROTL32_OFFSET))(x, r);
		}

		static ::System::UInt32 XXH32(::PVOID input, ::System::Int32 len, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_XXH32_OFFSET))(input, len, seed);
		}

		static ::System::UInt32 XXH32_round(::System::UInt32 acc, ::System::UInt32 input)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_XXH32_ROUND_OFFSET))(acc, input);
		}

		static ::System::UInt32 XXH32_avalanche(::System::UInt32 hash)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_XXH32_AVALANCHE_OFFSET))(hash);
		}

		static ::System::UInt32 XXH32_finalize(::System::UInt32 hash, ::PVOID ptr, ::System::Int32 len)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_XXH32_FINALIZE_OFFSET))(hash, ptr, len);
		}

		static ::System::UInt32 ComputeHash(::Il2CppArray<::System::Byte>* data, ::System::Int32 length, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_OFFSET))(data, length, seed);
		}

		static ::System::UInt32 ComputeHash_1(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 length, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_1_OFFSET))(data, offset, length, seed);
		}

		static ::System::UInt64 ComputeHash_2(::System::ArraySegment_1<::System::Byte> data, ::System::UInt32 seed)
		{
			return ((::System::UInt64(*)(::System::ArraySegment_1<::System::Byte>, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_2_OFFSET))(data, seed);
		}

		static ::System::UInt32 ComputeHash_3(::System::Span_1_9011FAD97750D224<::System::Byte> data, ::System::Int32 length, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::System::Span_1_9011FAD97750D224<::System::Byte>, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_3_OFFSET))(data, length, seed);
		}

		static ::System::UInt32 ComputeHash_4(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> data, ::System::Int32 length, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_4_OFFSET))(data, length, seed);
		}

		static ::System::UInt32 ComputeHash_5(::System::IO::Stream* stream, ::System::Int32 bufferSize, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::System::IO::Stream*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_5_OFFSET))(stream, bufferSize, seed);
		}

		static ::System::UInt32 ComputeHash_6(::System::String* str, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_COMPUTEHASH_6_OFFSET))(str, seed);
		}

		static ::System::UInt32 UnsafeComputeHash(::PVOID ptr, ::System::Int32 length, ::System::UInt32 seed)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH32_UNSAFECOMPUTEHASH_OFFSET))(ptr, length, seed);
		}
	};
}
