#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/NormalizationForm.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Globalization { class CodePageDataItem; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderFallback; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class EncoderNLS; }
namespace System::Text { class Encoding; }
namespace System::Text { class EncodingInfo; }
namespace System::Text { class EncodingProvider; }

#define SYSTEM_TEXT_ENCODING_CLONE_OFFSET UNITYSDK_OFFSET(0x1C0EF310)
#define SYSTEM_TEXT_ENCODING_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1C0EC130)
#define SYSTEM_TEXT_ENCODING_CONVERT_OFFSET UNITYSDK_OFFSET(0x1C0EC0A0)
#define SYSTEM_TEXT_ENCODING_CREATEDEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x1C0F0B30)
#define SYSTEM_TEXT_ENCODING_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0EB6F0)
#define SYSTEM_TEXT_ENCODING_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C0EB7B0)
#define SYSTEM_TEXT_ENCODING_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0EB660)
#define SYSTEM_TEXT_ENCODING_DESERIALIZEENCODING_OFFSET UNITYSDK_OFFSET(0x1C0EBA70)
#define SYSTEM_TEXT_ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C0F1160)
#define SYSTEM_TEXT_ENCODING_GETBESTFITBYTESTOUNICODEDATA_OFFSET UNITYSDK_OFFSET(0x1C0F1460)
#define SYSTEM_TEXT_ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET UNITYSDK_OFFSET(0x1C0F1420)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1C0EF590)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x1C0EF6E0)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_4_OFFSET UNITYSDK_OFFSET(0x1C0EF880)
#define SYSTEM_TEXT_ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1C0EF490)
#define SYSTEM_TEXT_ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1C0EFA10)
#define SYSTEM_TEXT_ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1C0EFB50)
#define SYSTEM_TEXT_ENCODING_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x1C0EFCC0)
#define SYSTEM_TEXT_ENCODING_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x1C0EFE30)
#define SYSTEM_TEXT_ENCODING_GETBYTES_6_OFFSET UNITYSDK_OFFSET(0x1C0EFEE0)
#define SYSTEM_TEXT_ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1C0EF910)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1C0F0220)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_3_OFFSET UNITYSDK_OFFSET(0x1C0F03C0)
#define SYSTEM_TEXT_ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1C0F0120)
#define SYSTEM_TEXT_ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1C0F0550)
#define SYSTEM_TEXT_ENCODING_GETCHARS_3_OFFSET UNITYSDK_OFFSET(0x1C0F0690)
#define SYSTEM_TEXT_ENCODING_GETCHARS_4_OFFSET UNITYSDK_OFFSET(0x1C0F08E0)
#define SYSTEM_TEXT_ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1C0F0450)
#define SYSTEM_TEXT_ENCODING_GETDATAITEM_OFFSET UNITYSDK_OFFSET(0x1C0EEE20)
#define SYSTEM_TEXT_ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1C0F0AE0)
#define SYSTEM_TEXT_ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1C0F0D90)
#define SYSTEM_TEXT_ENCODING_GETENCODINGS_OFFSET UNITYSDK_OFFSET(0x1C0EEDB0)
#define SYSTEM_TEXT_ENCODING_GETENCODING_1_OFFSET UNITYSDK_OFFSET(0x1C0EE470)
#define SYSTEM_TEXT_ENCODING_GETENCODING_2_OFFSET UNITYSDK_OFFSET(0x1C0EE8F0)
#define SYSTEM_TEXT_ENCODING_GETENCODING_3_OFFSET UNITYSDK_OFFSET(0x1C0EEB40)
#define SYSTEM_TEXT_ENCODING_GETENCODING_OFFSET UNITYSDK_OFFSET(0x1C0EC770)
#define SYSTEM_TEXT_ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C0F12F0)
#define SYSTEM_TEXT_ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1C0EEDE0)
#define SYSTEM_TEXT_ENCODING_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C0F0DE0)
#define SYSTEM_TEXT_ENCODING_GETSTRING_2_OFFSET UNITYSDK_OFFSET(0x1C0F0EC0)
#define SYSTEM_TEXT_ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1C0F0990)
#define SYSTEM_TEXT_ENCODING_GET_ASCII_OFFSET UNITYSDK_OFFSET(0x1C0EDA10)
#define SYSTEM_TEXT_ENCODING_GET_BIGENDIANUNICODE_OFFSET UNITYSDK_OFFSET(0x1C0ED630)
#define SYSTEM_TEXT_ENCODING_GET_BODYNAME_OFFSET UNITYSDK_OFFSET(0x1C0EEEF0)
#define SYSTEM_TEXT_ENCODING_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x1C0F0A30)
#define SYSTEM_TEXT_ENCODING_GET_DECODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0EF300)
#define SYSTEM_TEXT_ENCODING_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1C0ED4D0)
#define SYSTEM_TEXT_ENCODING_GET_ENCODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0EF2F0)
#define SYSTEM_TEXT_ENCODING_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1C0EEFB0)
#define SYSTEM_TEXT_ENCODING_GET_HEADERNAME_OFFSET UNITYSDK_OFFSET(0x1C0EEFC0)
#define SYSTEM_TEXT_ENCODING_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1C0EC320)
#define SYSTEM_TEXT_ENCODING_GET_ISBROWSERDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C0EF1E0)
#define SYSTEM_TEXT_ENCODING_GET_ISBROWSERSAVE_OFFSET UNITYSDK_OFFSET(0x1C0EF220)
#define SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C0EF260)
#define SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSSAVE_OFFSET UNITYSDK_OFFSET(0x1C0EF2A0)
#define SYSTEM_TEXT_ENCODING_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1C0EF3F0)
#define SYSTEM_TEXT_ENCODING_GET_ISSINGLEBYTE_OFFSET UNITYSDK_OFFSET(0x1C0EF2E0)
#define SYSTEM_TEXT_ENCODING_GET_LATIN1_OFFSET UNITYSDK_OFFSET(0x1C0EDA70)
#define SYSTEM_TEXT_ENCODING_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0x1C0ED550)
#define SYSTEM_TEXT_ENCODING_GET_UTF32_OFFSET UNITYSDK_OFFSET(0x1C0ED820)
#define SYSTEM_TEXT_ENCODING_GET_UTF7_OFFSET UNITYSDK_OFFSET(0x1C0ED710)
#define SYSTEM_TEXT_ENCODING_GET_UTF8_OFFSET UNITYSDK_OFFSET(0x1C0ED940)
#define SYSTEM_TEXT_ENCODING_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x1C0EF080)
#define SYSTEM_TEXT_ENCODING_GET_WINDOWSCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1C0EF140)
#define SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x1C0F0AD0)
#define SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1C0F0A40)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x1C0EB9C0)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C0EB910)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZING_1_OFFSET UNITYSDK_OFFSET(0x1C0EB9B0)
#define SYSTEM_TEXT_ENCODING_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1C0EB900)
#define SYSTEM_TEXT_ENCODING_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1C0EBA60)
#define SYSTEM_TEXT_ENCODING_REGISTERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C0EC370)
#define SYSTEM_TEXT_ENCODING_SERIALIZEENCODING_OFFSET UNITYSDK_OFFSET(0x1C0EBDF0)
#define SYSTEM_TEXT_ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1C0EB8A0)
#define SYSTEM_TEXT_ENCODING_SETREADONLY_OFFSET UNITYSDK_OFFSET(0x1C0F0D80)
#define SYSTEM_TEXT_ENCODING_SET_DECODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0EE850)
#define SYSTEM_TEXT_ENCODING_SET_ENCODERFALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0EE7B0)
#define SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_1_OFFSET UNITYSDK_OFFSET(0x1C0F1590)
#define SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C0F14A0)
#define SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_1_OFFSET UNITYSDK_OFFSET(0x1C0F1740)
#define SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C0F1650)

namespace System::Text
{
	inline static constexpr unsigned int Encoding_TypeDefinitionIndex = 489;

	class Encoding : public ::System::Object
	{
	public:
		::System::Globalization::CodePageDataItem* dataItem; // 0x10
		::System::Text::DecoderFallback* decoderFallback; // 0x18
		::System::Text::EncoderFallback* encoderFallback; // 0x20
		::System::Boolean m_isReadOnly; // 0x28
		::System::Boolean m_deserializedFromEverett; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 m_codePage; // 0x2C
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236C0);
		}

		static ::System::Text::Encoding** StaticGet_unicodeEncoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236C8);
		}

		static ::System::Text::Encoding** StaticGet_defaultEncoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236D0);
		}

		static ::System::Text::Encoding** StaticGet_utf7Encoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236D8);
		}

		static ::System::Text::Encoding** StaticGet_utf32Encoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236E0);
		}

		static ::System::Text::Encoding** StaticGet_asciiEncoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236E8);
		}

		static ::System::Text::Encoding** StaticGet_utf8Encoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236F0);
		}

		static ::System::Text::Encoding** StaticGet_latin1Encoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x236F8);
		}

		static ::System::Collections::Hashtable** StaticGet_encodings()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x23700);
		}

		static ::System::Text::Encoding** StaticGet_bigEndianUnicode()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("System.Text", "Encoding")->GetStaticField(0x23708);
		}

		// static const ::System::Object MIMECONTF_MAILNEWS; // 0x0
		// static const ::System::Object MIMECONTF_BROWSER; // 0x0
		// static const ::System::Object MIMECONTF_SAVABLE_MAILNEWS; // 0x0
		// static const ::System::Object MIMECONTF_SAVABLE_BROWSER; // 0x0
		// static const ::System::Object CodePageDefault; // 0x0
		// static const ::System::Object CodePageNoOEM; // 0x0
		// static const ::System::Object CodePageNoMac; // 0x0
		// static const ::System::Object CodePageNoThread; // 0x0
		// static const ::System::Object CodePageNoSymbol; // 0x0
		// static const ::System::Object CodePageUnicode; // 0x0
		// static const ::System::Object CodePageBigEndian; // 0x0
		// static const ::System::Object CodePageWindows1252; // 0x0
		// static const ::System::Object CodePageMacGB2312; // 0x0
		// static const ::System::Object CodePageGB2312; // 0x0
		// static const ::System::Object CodePageMacKorean; // 0x0
		// static const ::System::Object CodePageDLLKorean; // 0x0
		// static const ::System::Object ISO2022JP; // 0x0
		// static const ::System::Object ISO2022JPESC; // 0x0
		// static const ::System::Object ISO2022JPSISO; // 0x0
		// static const ::System::Object ISOKorean; // 0x0
		// static const ::System::Object ISOSimplifiedCN; // 0x0
		// static const ::System::Object EUCJP; // 0x0
		// static const ::System::Object ChineseHZ; // 0x0
		// static const ::System::Object DuplicateEUCCN; // 0x0
		// static const ::System::Object EUCCN; // 0x0
		// static const ::System::Object EUCKR; // 0x0
		// static const ::System::Object CodePageASCII; // 0x0
		// static const ::System::Object ISO_8859_1; // 0x0
		// static const ::System::Object ISCIIAssemese; // 0x0
		// static const ::System::Object ISCIIBengali; // 0x0
		// static const ::System::Object ISCIIDevanagari; // 0x0
		// static const ::System::Object ISCIIGujarathi; // 0x0
		// static const ::System::Object ISCIIKannada; // 0x0
		// static const ::System::Object ISCIIMalayalam; // 0x0
		// static const ::System::Object ISCIIOriya; // 0x0
		// static const ::System::Object ISCIIPanjabi; // 0x0
		// static const ::System::Object ISCIITamil; // 0x0
		// static const ::System::Object ISCIITelugu; // 0x0
		// static const ::System::Object GB18030; // 0x0
		// static const ::System::Object ISO_8859_8I; // 0x0
		// static const ::System::Object ISO_8859_8_Visual; // 0x0
		// static const ::System::Object ENC50229; // 0x0
		// static const ::System::Object CodePageUTF7; // 0x0
		// static const ::System::Object CodePageUTF8; // 0x0
		// static const ::System::Object CodePageUTF32; // 0x0
		// static const ::System::Object CodePageUTF32BE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Void OnDeserializing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZING_OFFSET))(this);
		}

		::System::Void OnDeserialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void OnDeserializing_1(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZING_1_OFFSET))(this, a1);
		}

		::System::Void OnDeserialized_1(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONDESERIALIZED_1_OFFSET))(this, a1);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ONSERIALIZING_OFFSET))(this, a1);
		}

		::System::Void DeserializeEncoding(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_DESERIALIZEENCODING_OFFSET))(this, a1, a2);
		}

		::System::Void SerializeEncoding(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SERIALIZEENCODING_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* Convert(::System::Text::Encoding* a1, ::System::Text::Encoding* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Text::Encoding*, ::System::Text::Encoding*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CONVERT_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* Convert_1(::System::Text::Encoding* a1, ::System::Text::Encoding* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Text::Encoding*, ::System::Text::Encoding*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CONVERT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		static ::System::Void RegisterProvider(::System::Text::EncodingProvider* a1)
		{
			return ((::System::Void(*)(::System::Text::EncodingProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_REGISTERPROVIDER_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncoding(::System::Int32 a1)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncoding_1(::System::Int32 a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Text::Encoding* GetEncoding_2(::System::String* a1)
		{
			return ((::System::Text::Encoding*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_2_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncoding_3(::System::String* a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODING_3_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Text::EncodingInfo*>* GetEncodings()
		{
			return ((::Il2CppArray<::System::Text::EncodingInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODINGS_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETPREAMBLE_OFFSET))(this);
		}

		::System::Void GetDataItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETDATAITEM_OFFSET))(this);
		}

		::System::String* get_BodyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_BODYNAME_OFFSET))(this);
		}

		::System::String* get_EncodingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ENCODINGNAME_OFFSET))(this);
		}

		::System::String* get_HeaderName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_HEADERNAME_OFFSET))(this);
		}

		::System::String* get_WebName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_WEBNAME_OFFSET))(this);
		}

		::System::Int32 get_WindowsCodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_WINDOWSCODEPAGE_OFFSET))(this);
		}

		::System::Boolean get_IsBrowserDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISBROWSERDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsBrowserSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISBROWSERSAVE_OFFSET))(this);
		}

		::System::Boolean get_IsMailNewsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsMailNewsSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISMAILNEWSSAVE_OFFSET))(this);
		}

		::System::Boolean get_IsSingleByte()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISSINGLEBYTE_OFFSET))(this);
		}

		::System::Text::EncoderFallback* get_EncoderFallback()
		{
			return ((::System::Text::EncoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ENCODERFALLBACK_OFFSET))(this);
		}

		::System::Void set_EncoderFallback(::System::Text::EncoderFallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::EncoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SET_ENCODERFALLBACK_OFFSET))(this, a1);
		}

		::System::Text::DecoderFallback* get_DecoderFallback()
		{
			return ((::System::Text::DecoderFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_DECODERFALLBACK_OFFSET))(this);
		}

		::System::Void set_DecoderFallback(::System::Text::DecoderFallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SET_DECODERFALLBACK_OFFSET))(this, a1);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_ASCII()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_ASCII_OFFSET))();
		}

		static ::System::Text::Encoding* get_Latin1()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_LATIN1_OFFSET))();
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_3(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetByteCount_4(::PVOID a1, ::System::Int32 a2, ::System::Text::EncoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTECOUNT_4_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* GetBytes(::Il2CppArray<::System::Char>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* GetBytes_3(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_3_OFFSET))(this, a1);
		}

		::System::Int32 GetBytes_4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_5(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::System::Text::EncoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_6(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBYTES_6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCharCount_2(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARCOUNT_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCharCount_3(::PVOID a1, ::System::Int32 a2, ::System::Text::DecoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARCOUNT_3_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Char>* GetChars(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Char>* GetChars_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars_3(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetChars_4(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::System::Text::DecoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETCHARS_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* GetString(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETSTRING_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_CodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_CODEPAGE_OFFSET))(this);
		}

		::System::Boolean IsAlwaysNormalized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_OFFSET))(this);
		}

		::System::Boolean IsAlwaysNormalized_1(::System::Text::NormalizationForm a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_ISALWAYSNORMALIZED_1_OFFSET))(this, a1);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETDECODER_OFFSET))(this);
		}

		static ::System::Text::Encoding* CreateDefaultEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_CREATEDEFAULTENCODING_OFFSET))();
		}

		::System::Void setReadOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_SETREADONLY_OFFSET))(this, a1);
		}

		static ::System::Text::Encoding* get_Default()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_DEFAULT_OFFSET))();
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::String* GetString_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETSTRING_1_OFFSET))(this, a1);
		}

		::System::String* GetString_2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETSTRING_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Text::Encoding* get_Unicode()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UNICODE_OFFSET))();
		}

		static ::System::Text::Encoding* get_BigEndianUnicode()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_BIGENDIANUNICODE_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF7()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UTF7_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF8()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UTF8_OFFSET))();
		}

		static ::System::Text::Encoding* get_UTF32()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GET_UTF32_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* GetBestFitUnicodeToBytesData()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* GetBestFitBytesToUnicodeData()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_GETBESTFITBYTESTOUNICODEDATA_OFFSET))(this);
		}

		::System::Void ThrowBytesOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_OFFSET))(this);
		}

		::System::Void ThrowBytesOverflow_1(::System::Text::EncoderNLS* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::EncoderNLS*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWBYTESOVERFLOW_1_OFFSET))(this, a1, a2);
		}

		::System::Void ThrowCharsOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_OFFSET))(this);
		}

		::System::Void ThrowCharsOverflow_1(::System::Text::DecoderNLS* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::DecoderNLS*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODING_THROWCHARSOVERFLOW_1_OFFSET))(this, a1, a2);
		}

	};
}
