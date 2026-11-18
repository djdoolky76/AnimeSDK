#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Standart/Hash/xxHash/XXHash64Update_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

#define STANDART_HASH_XXHASH_XXHASH64UPDATE_DIGESTBYTES_OFFSET UNITYSDK_OFFSET(0x1F7DBA60)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_DIGEST_1_OFFSET UNITYSDK_OFFSET(0x1F7DBE40)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_DIGEST_OFFSET UNITYSDK_OFFSET(0x1F7DB910)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_RESET_1_OFFSET UNITYSDK_OFFSET(0x1F7DB320)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_RESET_2_OFFSET UNITYSDK_OFFSET(0x1F7DBBE0)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_RESET_OFFSET UNITYSDK_OFFSET(0x1F7DB1B0)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1F7DB550)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x1F7DB610)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_3_OFFSET UNITYSDK_OFFSET(0x1F7DB710)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_4_OFFSET UNITYSDK_OFFSET(0x1F7DBD00)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_5_OFFSET UNITYSDK_OFFSET(0x1F7DBD70)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F7DB490)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH64_DIGEST_OFFSET UNITYSDK_OFFSET(0x1F7DAA80)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH64_RESET_OFFSET UNITYSDK_OFFSET(0x1F7DA510)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH64_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F7DA5C0)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_COPY_OFFSET UNITYSDK_OFFSET(0x1F7DA500)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_READ32_OFFSET UNITYSDK_OFFSET(0x1F7DA4D0)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_READ64_OFFSET UNITYSDK_OFFSET(0x1F7DA4E0)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_ZERO_OFFSET UNITYSDK_OFFSET(0x1F7DA4F0)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7DBF40)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7DB040)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7DB030)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE___INLINE__XXH64_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F7DAC60)
#define STANDART_HASH_XXHASH_XXHASH64UPDATE___INLINE__XXH64_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F7DAB20)

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int XXHash64Update_TypeDefinitionIndex = 8505;

	class XXHash64Update : public ::System::Object
	{
	public:
		static ::System::UInt64* StaticGet_XXH_PRIME64_5()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(XXHash64Update_TypeDefinitionIndex)->GetStaticField(0x3780);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_4()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(XXHash64Update_TypeDefinitionIndex)->GetStaticField(0x3788);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_1()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(XXHash64Update_TypeDefinitionIndex)->GetStaticField(0x3790);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_3()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(XXHash64Update_TypeDefinitionIndex)->GetStaticField(0x3798);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_2()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(XXHash64Update_TypeDefinitionIndex)->GetStaticField(0x37A0);
		}
		// static const ::System::UInt64 EmptyHash = 0xEF46DB3751D8E999; // 0x0
		::Standart::Hash::xxHash::XXHash64Update_State _state; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt64 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE__CTOR_1_OFFSET))(this, seed);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE__CCTOR_OFFSET))();
		}

		static ::System::UInt32 XXH_read32(::PVOID p)
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_READ32_OFFSET))(p);
		}

		static ::System::UInt64 XXH_read64(::PVOID p)
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_READ64_OFFSET))(p);
		}

		static ::System::Void XXH_zero(::PVOID target, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_ZERO_OFFSET))(target, length);
		}

		static ::System::Void XXH_copy(::PVOID target, ::PVOID source, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH_COPY_OFFSET))(target, source, length);
		}

		static ::System::Void XXH64_reset(::PVOID state, ::System::UInt64 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH64_RESET_OFFSET))(state, seed);
		}

		static ::System::Void XXH64_update(::PVOID state, ::PVOID input, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH64_UPDATE_OFFSET))(state, input, len);
		}

		static ::System::UInt64 XXH64_digest(::PVOID state)
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_XXH64_DIGEST_OFFSET))(state);
		}

		static ::System::Void __inline__XXH64_Update(::PVOID& ptr, ::PVOID limit, ::System::UInt64& v1, ::System::UInt64& v2, ::System::UInt64& v3, ::System::UInt64& v4)
		{
			return ((::System::Void(*)(::PVOID&, ::PVOID, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE___INLINE__XXH64_UPDATE_OFFSET))(ptr, limit, v1, v2, v3, v4);
		}

		static ::System::UInt64 __inline__XXH64_finalize(::PVOID pData, ::System::UInt32 len, ::System::UInt64& v1, ::System::UInt64& v2, ::System::UInt64& v3, ::System::UInt64& v4, ::System::UInt64 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE___INLINE__XXH64_FINALIZE_OFFSET))(pData, len, v1, v2, v3, v4, length, seed);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_RESET_OFFSET))(this);
		}

		::System::Void Reset_1(::System::UInt64 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_RESET_1_OFFSET))(this, seed);
		}

		::System::Void Update(::PVOID bytes, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_OFFSET))(this, bytes, length);
		}

		::System::Void Update_1(::PVOID bytes, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_1_OFFSET))(this, bytes, length);
		}

		::System::Void Update_2(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> bytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_2_OFFSET))(this, bytes);
		}

		::System::Void Update_3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_3_OFFSET))(this, bytes, offset, length);
		}

		::System::UInt64 Digest()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_DIGEST_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DigestBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_DIGESTBYTES_OFFSET))(this);
		}

		static ::System::Void Reset_2(::Standart::Hash::xxHash::XXHash64Update_State& state, ::System::UInt64 seed)
		{
			return ((::System::Void(*)(::Standart::Hash::xxHash::XXHash64Update_State&, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_RESET_2_OFFSET))(state, seed);
		}

		static ::System::Void Update_4(::Standart::Hash::xxHash::XXHash64Update_State& state, ::PVOID bytes, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Standart::Hash::xxHash::XXHash64Update_State&, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_4_OFFSET))(state, bytes, length);
		}

		static ::System::Void Update_5(::Standart::Hash::xxHash::XXHash64Update_State& state, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> bytes)
		{
			return ((::System::Void(*)(::Standart::Hash::xxHash::XXHash64Update_State&, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_UPDATE_5_OFFSET))(state, bytes);
		}

		static ::System::UInt64 Digest_1(::Standart::Hash::xxHash::XXHash64Update_State& state)
		{
			return ((::System::UInt64(*)(::Standart::Hash::xxHash::XXHash64Update_State&))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64UPDATE_DIGEST_1_OFFSET))(state);
		}
	};
}
