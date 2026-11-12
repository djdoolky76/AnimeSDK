#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_UTF32ENCODING_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2A3900)
#define SYSTEM_TEXT_UTF32ENCODING_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D2B6E00)
#define SYSTEM_TEXT_UTF32ENCODING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B6D60)
#define SYSTEM_TEXT_UTF32ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D2B9D30)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1D2B7570)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1D2B75F0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x1D2B7020)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1D2B6ED0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1D2B7FD0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1D2B8200)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1D2B78B0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1D2B76B0)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1D2B8920)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1D2B8460)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1D2B8310)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1D2B9430)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1D2B8C10)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1D2B89E0)
#define SYSTEM_TEXT_UTF32ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1D2B96E0)
#define SYSTEM_TEXT_UTF32ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1D2B9840)
#define SYSTEM_TEXT_UTF32ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D2B9EB0)
#define SYSTEM_TEXT_UTF32ENCODING_GETHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x1D2B96C0)
#define SYSTEM_TEXT_UTF32ENCODING_GETLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x1D2B96D0)
#define SYSTEM_TEXT_UTF32ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1D2B9900)
#define SYSTEM_TEXT_UTF32ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1D2B9AE0)
#define SYSTEM_TEXT_UTF32ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1D2B9C80)
#define SYSTEM_TEXT_UTF32ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1D2B9540)
#define SYSTEM_TEXT_UTF32ENCODING_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x1D2B96A0)
#define SYSTEM_TEXT_UTF32ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1D2B6E60)

namespace System::Text
{
	inline static constexpr unsigned int UTF32Encoding_TypeDefinitionIndex = 502;

	class UTF32Encoding : public ::System::Text::Encoding
	{
	public:
		::System::Boolean isThrowException; // 0x30
		::System::Boolean bigEndian; // 0x31
		::System::Boolean emitUTF32ByteOrderMark; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_2(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBytes(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_2(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetChars_1(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_3(::PVOID a1, ::System::Int32 a2, ::System::Text::EncoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes_3(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::System::Text::EncoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetCharCount_2(::PVOID a1, ::System::Int32 a2, ::System::Text::DecoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars_2(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::System::Text::DecoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetSurrogate(::System::Char a1, ::System::Char a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETSURROGATE_OFFSET))(this, a1, a2);
		}

		::System::Char GetHighSurrogate(::System::UInt32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETHIGHSURROGATE_OFFSET))(this, a1);
		}

		::System::Char GetLowSurrogate(::System::UInt32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETLOWSURROGATE_OFFSET))(this, a1);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETMAXBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETMAXCHARCOUNT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETPREAMBLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETHASHCODE_OFFSET))(this);
		}

	};
}
