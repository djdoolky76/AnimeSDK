#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class String; }

#define FOUNDATION_HEXCONVERTCOMPAT_FROMCHAR_OFFSET UNITYSDK_OFFSET(0x1D73FFB0)
#define FOUNDATION_HEXCONVERTCOMPAT_FROMHEXSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D73F8F0)
#define FOUNDATION_HEXCONVERTCOMPAT_FROMHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1D73F780)
#define FOUNDATION_HEXCONVERTCOMPAT_TRYDECODEFROMUTF16_1_OFFSET UNITYSDK_OFFSET(0x1D73FC40)
#define FOUNDATION_HEXCONVERTCOMPAT_TRYDECODEFROMUTF16_OFFSET UNITYSDK_OFFSET(0x1D73FB00)
#define FOUNDATION_HEXCONVERTCOMPAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7400D0)

namespace Foundation
{
	inline static constexpr unsigned int HexConvertCompat_TypeDefinitionIndex = 8040;

	class HexConvertCompat : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_CharToHexLookup()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HexConvertCompat_TypeDefinitionIndex)->GetStaticField(0x7370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_HEXCONVERTCOMPAT__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* FromHexString(::System::String* hex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_HEXCONVERTCOMPAT_FROMHEXSTRING_OFFSET))(hex);
		}

		static ::Il2CppArray<::System::Byte>* FromHexString_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> chars)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_HEXCONVERTCOMPAT_FROMHEXSTRING_1_OFFSET))(chars);
		}

		static ::System::Boolean TryDecodeFromUtf16(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> chars, ::System::Span_1_9011FAD97750D224<::System::Byte> bytes)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::Span_1_9011FAD97750D224<::System::Byte>))((::PBYTE)hIl2Cpp + FOUNDATION_HEXCONVERTCOMPAT_TRYDECODEFROMUTF16_OFFSET))(chars, bytes);
		}

		static ::System::Boolean TryDecodeFromUtf16_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> chars, ::System::Span_1_9011FAD97750D224<::System::Byte> bytes, ::System::Int32& charsProcessed)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>, ::System::Span_1_9011FAD97750D224<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_HEXCONVERTCOMPAT_TRYDECODEFROMUTF16_1_OFFSET))(chars, bytes, charsProcessed);
		}

		static ::System::Int32 FromChar(::System::Int32 c)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_HEXCONVERTCOMPAT_FROMCHAR_OFFSET))(c);
		}
	};
}
