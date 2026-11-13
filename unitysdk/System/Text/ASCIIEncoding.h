#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"
namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_ASCIIENCODING_CTOR_OFFSET UNITYSDK_OFFSET(0x17569760)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1756A0B0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1756A100)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x17569B50)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x17569A00)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1756AB80)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1756ADB0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1756A390)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1756A1C0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1756B2D0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1756B010)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1756AEC0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1756BA40)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1756B5C0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1756B390)
#define SYSTEM_TEXT_ASCIIENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1756C1A0)
#define SYSTEM_TEXT_ASCIIENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1756C260)
#define SYSTEM_TEXT_ASCIIENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1756BDD0)
#define SYSTEM_TEXT_ASCIIENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1756BFB0)
#define SYSTEM_TEXT_ASCIIENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1756BB50)
#define SYSTEM_TEXT_ASCIIENCODING_GET_ISSINGLEBYTE_OFFSET UNITYSDK_OFFSET(0x1756C190)
#define SYSTEM_TEXT_ASCIIENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x17569890)

namespace System::Text
{
	inline static constexpr unsigned int ASCIIEncoding_TypeDefinitionIndex = 466;

	class ASCIIEncoding : public ::System::Text::Encoding
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_CTOR_OFFSET))(this);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_2(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBytes(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_2(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetChars_1(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_3(::PVOID a1, ::System::Int32 a2, ::System::Text::EncoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes_3(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::System::Text::EncoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetCharCount_2(::PVOID a1, ::System::Int32 a2, ::System::Text::DecoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars_2(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::System::Text::DecoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETMAXBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETMAXCHARCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSingleByte()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GET_ISSINGLEBYTE_OFFSET))(this);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETENCODER_OFFSET))(this);
		}

	};
}
