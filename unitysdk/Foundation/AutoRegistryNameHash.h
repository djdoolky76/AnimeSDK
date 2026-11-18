#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class String; }

#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x18A6A300)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x18A6A1D0)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x18A69F50)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_1_OFFSET UNITYSDK_OFFSET(0x18A6B0C0)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_2_OFFSET UNITYSDK_OFFSET(0x18A6A890)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_OFFSET UNITYSDK_OFFSET(0x18A6A760)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_ENCODEUTF8_OFFSET UNITYSDK_OFFSET(0x18A6B1F0)

namespace Foundation
{
	inline static constexpr unsigned int AutoRegistryNameHash_TypeDefinitionIndex = 8694;

	class AutoRegistryNameHash : public ::System::Object
	{
	public:
		// static const ::System::UInt64 InvalidHash = 0x0; // 0x0
		// static const ::System::UInt64 DefaultSeed = 0x0; // 0x0
		// static const ::System::Int32 MaxStackAllocUtf8Bytes = 0x200; // 0x0

		static ::System::UInt64 ComputeHash(::System::String* name)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_OFFSET))(name);
		}

		static ::System::UInt64 ComputeHash_1(::System::String* name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_1_OFFSET))(name, seed);
		}

		static ::System::UInt64 ComputeHash_2(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_2_OFFSET))(name, seed);
		}

		static ::System::UInt64 ComputeUtf8Hash(::System::String* name)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_OFFSET))(name);
		}

		static ::System::UInt64 ComputeUtf8Hash_1(::System::String* name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_1_OFFSET))(name, seed);
		}

		static ::System::UInt64 ComputeUtf8Hash_2(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_2_OFFSET))(name, seed);
		}

		static ::System::Int32 EncodeUtf8(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> chars, ::System::Span_1_9011FAD97750D224<::System::Byte> bytes)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::Span_1_9011FAD97750D224<::System::Byte>))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_ENCODEUTF8_OFFSET))(chars, bytes);
		}
	};
}
