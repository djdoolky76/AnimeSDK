#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ExceptionType.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlDateTimeSerializationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class ArgumentException; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_XML_XMLCONVERT_CCTOR_OFFSET UNITYSDK_OFFSET(0x18A69F60)
#define SYSTEM_XML_XMLCONVERT_CREATEALLDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x18A68180)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x18A69370)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x18A634F0)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A691C0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x18A69D90)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A69B70)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x18A699D0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x18A69AD0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A69970)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A69E00)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMECHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A62FB0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x18A69640)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x18A696B0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A69580)
#define SYSTEM_XML_XMLCONVERT_DECODENAME_OFFSET UNITYSDK_OFFSET(0x18A31D10)
#define SYSTEM_XML_XMLCONVERT_DOUBLETOINT64BITS_OFFSET UNITYSDK_OFFSET(0x18A691B0)
#define SYSTEM_XML_XMLCONVERT_ENCODELOCALNAME_OFFSET UNITYSDK_OFFSET(0x18A20740)
#define SYSTEM_XML_XMLCONVERT_ENCODENAME_1_OFFSET UNITYSDK_OFFSET(0x18A61BC0)
#define SYSTEM_XML_XMLCONVERT_ENCODENAME_OFFSET UNITYSDK_OFFSET(0x18A259F0)
#define SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_1_OFFSET UNITYSDK_OFFSET(0x18A62D80)
#define SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_OFFSET UNITYSDK_OFFSET(0x18A62C60)
#define SYSTEM_XML_XMLCONVERT_FROMHEX_OFFSET UNITYSDK_OFFSET(0x18A62C40)
#define SYSTEM_XML_XMLCONVERT_GET_ALLDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x18A680B0)
#define SYSTEM_XML_XMLCONVERT_ISNEGATIVEZERO_OFFSET UNITYSDK_OFFSET(0x18A643C0)
#define SYSTEM_XML_XMLCONVERT_SPLITSTRING_OFFSET UNITYSDK_OFFSET(0x18A69130)
#define SYSTEM_XML_XMLCONVERT_STREQUAL_OFFSET UNITYSDK_OFFSET(0x18A68F40)
#define SYSTEM_XML_XMLCONVERT_SWITCHTOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x18A64A10)
#define SYSTEM_XML_XMLCONVERT_SWITCHTOUTCTIME_OFFSET UNITYSDK_OFFSET(0x18A64AD0)
#define SYSTEM_XML_XMLCONVERT_TOBINHEXSTRING_OFFSET UNITYSDK_OFFSET(0x18A62E40)
#define SYSTEM_XML_XMLCONVERT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18A345D0)
#define SYSTEM_XML_XMLCONVERT_TOBYTE_OFFSET UNITYSDK_OFFSET(0x18A66690)
#define SYSTEM_XML_XMLCONVERT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x18A64FF0)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x18A68520)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x18A685A0)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x18A68440)
#define SYSTEM_XML_XMLCONVERT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x18A652B0)
#define SYSTEM_XML_XMLCONVERT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x18A679C0)
#define SYSTEM_XML_XMLCONVERT_TOGUID_OFFSET UNITYSDK_OFFSET(0x18A688F0)
#define SYSTEM_XML_XMLCONVERT_TOINT16_OFFSET UNITYSDK_OFFSET(0x18A65D20)
#define SYSTEM_XML_XMLCONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x18A66050)
#define SYSTEM_XML_XMLCONVERT_TOINT64_OFFSET UNITYSDK_OFFSET(0x18A66370)
#define SYSTEM_XML_XMLCONVERT_TOINTEGER_OFFSET UNITYSDK_OFFSET(0x18A65650)
#define SYSTEM_XML_XMLCONVERT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x18A659F0)
#define SYSTEM_XML_XMLCONVERT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x18A67330)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_10_OFFSET UNITYSDK_OFFSET(0x18A641E0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_11_OFFSET UNITYSDK_OFFSET(0x18A64440)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_12_OFFSET UNITYSDK_OFFSET(0x18A645E0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_13_OFFSET UNITYSDK_OFFSET(0x18A646E0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_14_OFFSET UNITYSDK_OFFSET(0x18A64B80)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_15_OFFSET UNITYSDK_OFFSET(0x18A64BC0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18A63CB0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x18A63D60)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x18A63DF0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x18A63E80)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x18A63F10)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x18A63FA0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x18A64030)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x18A640C0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x18A64150)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18A63C90)
#define SYSTEM_XML_XMLCONVERT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x18A669C0)
#define SYSTEM_XML_XMLCONVERT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x18A66CF0)
#define SYSTEM_XML_XMLCONVERT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x18A67010)
#define SYSTEM_XML_XMLCONVERT_TOURI_OFFSET UNITYSDK_OFFSET(0x18A4E530)
#define SYSTEM_XML_XMLCONVERT_TRIMSTRINGEND_OFFSET UNITYSDK_OFFSET(0x18A69090)
#define SYSTEM_XML_XMLCONVERT_TRIMSTRINGSTART_OFFSET UNITYSDK_OFFSET(0x18A69010)
#define SYSTEM_XML_XMLCONVERT_TRIMSTRING_OFFSET UNITYSDK_OFFSET(0x18A64BD0)
#define SYSTEM_XML_XMLCONVERT_TRYTOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18A64C70)
#define SYSTEM_XML_XMLCONVERT_TRYTOBYTE_OFFSET UNITYSDK_OFFSET(0x18A66730)
#define SYSTEM_XML_XMLCONVERT_TRYTOCHAR_OFFSET UNITYSDK_OFFSET(0x18A65090)
#define SYSTEM_XML_XMLCONVERT_TRYTODECIMAL_OFFSET UNITYSDK_OFFSET(0x18A65390)
#define SYSTEM_XML_XMLCONVERT_TRYTODOUBLE_OFFSET UNITYSDK_OFFSET(0x18A67C30)
#define SYSTEM_XML_XMLCONVERT_TRYTOGUID_OFFSET UNITYSDK_OFFSET(0x18A68910)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT16_OFFSET UNITYSDK_OFFSET(0x18A65DC0)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT32_OFFSET UNITYSDK_OFFSET(0x18A660F0)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT64_OFFSET UNITYSDK_OFFSET(0x18A66410)
#define SYSTEM_XML_XMLCONVERT_TRYTOINTEGER_OFFSET UNITYSDK_OFFSET(0x18A65730)
#define SYSTEM_XML_XMLCONVERT_TRYTOSBYTE_OFFSET UNITYSDK_OFFSET(0x18A65A90)
#define SYSTEM_XML_XMLCONVERT_TRYTOSINGLE_OFFSET UNITYSDK_OFFSET(0x18A675A0)
#define SYSTEM_XML_XMLCONVERT_TRYTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x18A68060)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT16_OFFSET UNITYSDK_OFFSET(0x18A66A60)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT32_OFFSET UNITYSDK_OFFSET(0x18A66D90)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT64_OFFSET UNITYSDK_OFFSET(0x18A670B0)
#define SYSTEM_XML_XMLCONVERT_TRYTOURI_OFFSET UNITYSDK_OFFSET(0x18A68AB0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNAME_OFFSET UNITYSDK_OFFSET(0x18A63240)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNCNAME_OFFSET UNITYSDK_OFFSET(0x18A637C0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNMTOKEN_OFFSET UNITYSDK_OFFSET(0x18A63A20)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNORMALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x18A63BE0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYTOKEN_OFFSET UNITYSDK_OFFSET(0x18A63900)
#define SYSTEM_XML_XMLCONVERT_VERIFYNAME_OFFSET UNITYSDK_OFFSET(0x18A62EB0)
#define SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_1_OFFSET UNITYSDK_OFFSET(0x18A636C0)
#define SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_OFFSET UNITYSDK_OFFSET(0x18A4E4D0)
#define SYSTEM_XML_XMLCONVERT_VERIFYQNAME_OFFSET UNITYSDK_OFFSET(0x18A63410)

namespace System::Xml
{
	inline static constexpr unsigned int XmlConvert_TypeDefinitionIndex = 1943;

	class XmlConvert : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_crt()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Xml", "XmlConvert")->GetStaticField(0x27E90);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_WhitespaceChars()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Xml", "XmlConvert")->GetStaticField(0x27E98);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_c_DecodeCharPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("System.Xml", "XmlConvert")->GetStaticField(0x27EA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_allDateTimeFormats()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Xml", "XmlConvert")->GetStaticField(0x27EA8);
		}

		static ::System::Xml::XmlCharType* StaticGet_xmlCharType()
		{
			return (::System::Xml::XmlCharType*)UnitySDK::FromName("System.Xml", "XmlConvert")->GetStaticField(0x27EB0);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_c_EncodeCharPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("System.Xml", "XmlConvert")->GetStaticField(0x27EB8);
		}

		static ::System::Int32* StaticGet_c_EncodedCharLength()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml", "XmlConvert")->GetStaticField(0x82D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CCTOR_OFFSET))();
		}

		static ::System::String* EncodeName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ENCODENAME_OFFSET))(a1);
		}

		static ::System::String* EncodeLocalName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ENCODELOCALNAME_OFFSET))(a1);
		}

		static ::System::String* DecodeName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_DECODENAME_OFFSET))(a1);
		}

		static ::System::String* EncodeName_1(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ENCODENAME_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FromHex(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_FROMHEX_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FromBinHexString(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FromBinHexString_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_1_OFFSET))(a1, a2);
		}

		static ::System::String* ToBinHexString(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOBINHEXSTRING_OFFSET))(a1);
		}

		static ::System::String* VerifyName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYNAME_OFFSET))(a1);
		}

		static ::System::Exception* TryVerifyName(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNAME_OFFSET))(a1);
		}

		static ::System::String* VerifyQName(::System::String* a1, ::System::Xml::ExceptionType a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYQNAME_OFFSET))(a1, a2);
		}

		static ::System::String* VerifyNCName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_OFFSET))(a1);
		}

		static ::System::String* VerifyNCName_1(::System::String* a1, ::System::Xml::ExceptionType a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_1_OFFSET))(a1, a2);
		}

		static ::System::Exception* TryVerifyNCName(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNCNAME_OFFSET))(a1);
		}

		static ::System::Exception* TryVerifyTOKEN(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYTOKEN_OFFSET))(a1);
		}

		static ::System::Exception* TryVerifyNMTOKEN(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNMTOKEN_OFFSET))(a1);
		}

		static ::System::Exception* TryVerifyNormalizedString(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNORMALIZEDSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString_1(::System::Decimal a1)
		{
			return ((::System::String*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_1_OFFSET))(a1);
		}

		static ::System::String* ToString_2(::System::SByte a1)
		{
			return ((::System::String*(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_2_OFFSET))(a1);
		}

		static ::System::String* ToString_3(::System::Int16 a1)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_3_OFFSET))(a1);
		}

		static ::System::String* ToString_4(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_4_OFFSET))(a1);
		}

		static ::System::String* ToString_5(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_5_OFFSET))(a1);
		}

		static ::System::String* ToString_6(::System::Byte a1)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_6_OFFSET))(a1);
		}

		static ::System::String* ToString_7(::System::UInt16 a1)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_7_OFFSET))(a1);
		}

		static ::System::String* ToString_8(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_8_OFFSET))(a1);
		}

		static ::System::String* ToString_9(::System::UInt64 a1)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_9_OFFSET))(a1);
		}

		static ::System::String* ToString_10(::System::Single a1)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_10_OFFSET))(a1);
		}

		static ::System::String* ToString_11(::System::Double a1)
		{
			return ((::System::String*(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_11_OFFSET))(a1);
		}

		static ::System::String* ToString_12(::System::TimeSpan a1)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_12_OFFSET))(a1);
		}

		static ::System::String* ToString_13(::System::DateTime a1, ::System::Xml::XmlDateTimeSerializationMode a2)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::Xml::XmlDateTimeSerializationMode))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_13_OFFSET))(a1, a2);
		}

		static ::System::String* ToString_14(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_14_OFFSET))(a1);
		}

		static ::System::String* ToString_15(::System::Guid a1)
		{
			return ((::System::String*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_15_OFFSET))(a1);
		}

		static ::System::Boolean ToBoolean(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOBOOLEAN_OFFSET))(a1);
		}

		static ::System::Exception* TryToBoolean(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::Char ToChar(::System::String* a1)
		{
			return ((::System::Char(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOCHAR_OFFSET))(a1);
		}

		static ::System::Exception* TryToChar(::System::String* a1, ::System::Char a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOCHAR_OFFSET))(a1, a2);
		}

		static ::System::Decimal ToDecimal(::System::String* a1)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODECIMAL_OFFSET))(a1);
		}

		static ::System::Exception* TryToDecimal(::System::String* a1, ::System::Decimal a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTODECIMAL_OFFSET))(a1, a2);
		}

		static ::System::Decimal ToInteger(::System::String* a1)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINTEGER_OFFSET))(a1);
		}

		static ::System::Exception* TryToInteger(::System::String* a1, ::System::Decimal a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINTEGER_OFFSET))(a1, a2);
		}

		static ::System::SByte ToSByte(::System::String* a1)
		{
			return ((::System::SByte(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSBYTE_OFFSET))(a1);
		}

		static ::System::Exception* TryToSByte(::System::String* a1, ::System::SByte a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOSBYTE_OFFSET))(a1, a2);
		}

		static ::System::Int16 ToInt16(::System::String* a1)
		{
			return ((::System::Int16(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINT16_OFFSET))(a1);
		}

		static ::System::Exception* TryToInt16(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINT16_OFFSET))(a1, a2);
		}

		static ::System::Int32 ToInt32(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINT32_OFFSET))(a1);
		}

		static ::System::Exception* TryToInt32(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINT32_OFFSET))(a1, a2);
		}

		static ::System::Int64 ToInt64(::System::String* a1)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINT64_OFFSET))(a1);
		}

		static ::System::Exception* TryToInt64(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINT64_OFFSET))(a1, a2);
		}

		static ::System::Byte ToByte(::System::String* a1)
		{
			return ((::System::Byte(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOBYTE_OFFSET))(a1);
		}

		static ::System::Exception* TryToByte(::System::String* a1, ::System::Byte a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOBYTE_OFFSET))(a1, a2);
		}

		static ::System::UInt16 ToUInt16(::System::String* a1)
		{
			return ((::System::UInt16(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOUINT16_OFFSET))(a1);
		}

		static ::System::Exception* TryToUInt16(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOUINT16_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ToUInt32(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOUINT32_OFFSET))(a1);
		}

		static ::System::Exception* TryToUInt32(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOUINT32_OFFSET))(a1, a2);
		}

		static ::System::UInt64 ToUInt64(::System::String* a1)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOUINT64_OFFSET))(a1);
		}

		static ::System::Exception* TryToUInt64(::System::String* a1, ::System::UInt64 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOUINT64_OFFSET))(a1, a2);
		}

		static ::System::Single ToSingle(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSINGLE_OFFSET))(a1);
		}

		static ::System::Exception* TryToSingle(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOSINGLE_OFFSET))(a1, a2);
		}

		static ::System::Double ToDouble(::System::String* a1)
		{
			return ((::System::Double(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODOUBLE_OFFSET))(a1);
		}

		static ::System::Exception* TryToDouble(::System::String* a1, ::System::Double a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTODOUBLE_OFFSET))(a1, a2);
		}

		static ::System::Exception* TryToTimeSpan(::System::String* a1, ::System::TimeSpan a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOTIMESPAN_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* get_AllDateTimeFormats()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_GET_ALLDATETIMEFORMATS_OFFSET))();
		}

		static ::System::Void CreateAllDateTimeFormats()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEALLDATETIMEFORMATS_OFFSET))();
		}

		static ::System::DateTime ToDateTime(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODATETIME_OFFSET))(a1);
		}

		static ::System::DateTime ToDateTime_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODATETIME_1_OFFSET))(a1, a2);
		}

		static ::System::DateTime ToDateTime_2(::System::String* a1, ::System::Xml::XmlDateTimeSerializationMode a2)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::Xml::XmlDateTimeSerializationMode))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODATETIME_2_OFFSET))(a1, a2);
		}

		static ::System::Guid ToGuid(::System::String* a1)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOGUID_OFFSET))(a1);
		}

		static ::System::Exception* TryToGuid(::System::String* a1, ::System::Guid a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOGUID_OFFSET))(a1, a2);
		}

		static ::System::DateTime SwitchToLocalTime(::System::DateTime a1)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_SWITCHTOLOCALTIME_OFFSET))(a1);
		}

		static ::System::DateTime SwitchToUtcTime(::System::DateTime a1)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_SWITCHTOUTCTIME_OFFSET))(a1);
		}

		static ::System::Uri* ToUri(::System::String* a1)
		{
			return ((::System::Uri*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOURI_OFFSET))(a1);
		}

		static ::System::Exception* TryToUri(::System::String* a1, ::System::Uri* a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOURI_OFFSET))(a1, a2);
		}

		static ::System::Boolean StrEqual(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_STREQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* TrimString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRIMSTRING_OFFSET))(a1);
		}

		static ::System::String* TrimStringStart(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRIMSTRINGSTART_OFFSET))(a1);
		}

		static ::System::String* TrimStringEnd(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRIMSTRINGEND_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* SplitString(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_SPLITSTRING_OFFSET))(a1);
		}

		static ::System::Boolean IsNegativeZero(::System::Double a1)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ISNEGATIVEZERO_OFFSET))(a1);
		}

		static ::System::Int64 DoubleToInt64Bits(::System::Double a1)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_DOUBLETOINT64BITS_OFFSET))(a1);
		}

		static ::System::Exception* CreateException(::System::String* a1, ::System::String* a2, ::System::Xml::ExceptionType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Exception* CreateException_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Xml::ExceptionType a3)
		{
			return ((::System::Exception*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* CreateException_2(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Xml::ExceptionType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Exception*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Exception* CreateInvalidSurrogatePairException(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Exception* CreateInvalidSurrogatePairException_1(::System::Char a1, ::System::Char a2, ::System::Xml::ExceptionType a3)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* CreateInvalidSurrogatePairException_2(::System::Char a1, ::System::Char a2, ::System::Xml::ExceptionType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Exception* CreateInvalidHighSurrogateCharException(::System::Char a1)
		{
			return ((::System::Exception*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_OFFSET))(a1);
		}

		static ::System::Exception* CreateInvalidHighSurrogateCharException_1(::System::Char a1, ::System::Xml::ExceptionType a2)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_1_OFFSET))(a1, a2);
		}

		static ::System::Exception* CreateInvalidHighSurrogateCharException_2(::System::Char a1, ::System::Xml::ExceptionType a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* CreateInvalidCharException(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Exception* CreateInvalidCharException_1(::System::Char a1, ::System::Char a2, ::System::Xml::ExceptionType a3)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* CreateInvalidNameCharException(::System::String* a1, ::System::Int32 a2, ::System::Xml::ExceptionType a3)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMECHAREXCEPTION_OFFSET))(a1, a2, a3);
		}

		static ::System::ArgumentException* CreateInvalidNameArgumentException(::System::String* a1, ::System::String* a2)
		{
			return ((::System::ArgumentException*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMEARGUMENTEXCEPTION_OFFSET))(a1, a2);
		}

	};
}
