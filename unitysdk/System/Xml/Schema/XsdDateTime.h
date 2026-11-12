#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/Schema/XsdDateTimeFlags.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_DateTimeTypeCode.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_XsdDateTimeKind.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_Parser.h"
#include "unitysdk/System/DateTimeOffset.h"
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SCHEMA_XSDDATETIME_CCTOR_OFFSET UNITYSDK_OFFSET(0x201A05E0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EA7140)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3EA7400)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3EA7410)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_4_OFFSET UNITYSDK_OFFSET(0x3EA7440)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_OFFSET UNITYSDK_OFFSET(0x3EA7130)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3E6ADE0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET UNITYSDK_OFFSET(0x3EA7460)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x3E6AF30)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x304ACC0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET UNITYSDK_OFFSET(0x304ACD0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x3E6B000)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x3E6B040)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3E6B170)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x3E6B1F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET UNITYSDK_OFFSET(0x28060)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET UNITYSDK_OFFSET(0x264F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET UNITYSDK_OFFSET(0x3EA72A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x3EA7770)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x20187B70)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x201869B0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET UNITYSDK_OFFSET(0x3EA7740)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET UNITYSDK_OFFSET(0x3EA7750)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET UNITYSDK_OFFSET(0x3EA7760)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x3EA7800)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EA7730)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x2019EF50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_TypeDefinitionIndex = 2234;

	struct alignas(4) XsdDateTime
	{
		::System::DateTime dt; // 0x10
		::System::UInt32 extra; // 0x18
		static ::Il2CppArray<::System::Xml::Schema::XmlTypeCode>** StaticGet_typeCodes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlTypeCode>**)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x2FE40);
		}

		static ::System::Int32* StaticGet_LzHH_mm_ss()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA160);
		}

		static ::System::Int32* StaticGet_Lz__mm()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA164);
		}

		static ::System::Int32* StaticGet_Lzyyyy_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA168);
		}

		static ::System::Int32* StaticGet_Lz_zz_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA16C);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM_dd()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA170);
		}

		static ::System::Int32* StaticGet_Lz___()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA174);
		}

		static ::System::Int32* StaticGet_Lzyyyy()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA178);
		}

		static ::System::Int32* StaticGet_LzHH_mm()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA17C);
		}

		static ::System::Int32* StaticGet_Lz___dd()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA180);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM_ddT()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA184);
		}

		static ::System::Int32* StaticGet_Lz__()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA188);
		}

		static ::System::Int32* StaticGet_Lz_zz()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA18C);
		}

		static ::System::Int32* StaticGet_LzHH_mm_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA190);
		}

		static ::System::Int32* StaticGet_Lz__mm__()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA194);
		}

		static ::System::Int32* StaticGet_Lz_zz_zz()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA198);
		}

		static ::System::Int32* StaticGet_LzHH_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA19C);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA1A0);
		}

		static ::System::Int32* StaticGet_Lz__mm_dd()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA1A4);
		}

		static ::System::Int32* StaticGet_Lz__mm_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA1A8);
		}

		static ::System::Int32* StaticGet_Lz_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA1AC);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA1B0);
		}

		static ::System::Int32* StaticGet_LzHH()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0xA1B4);
		}

		::System::Void _ctor(::System::String* a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XsdDateTime_Parser a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdDateTime_Parser))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::DateTime a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::DateTimeOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::DateTimeOffset a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_4_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_CCTOR_OFFSET))();
		}

		::System::Void InitiateXsdDateTime(::System::Xml::Schema::XsdDateTime_Parser a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdDateTime_Parser))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean TryParse(::System::String* a1, ::System::Xml::Schema::XsdDateTimeFlags a2, ::System::Xml::Schema::XsdDateTime a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Xml::Schema::XsdDateTimeFlags, ::System::Xml::Schema::XsdDateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET))(a1, a2, a3);
		}
		*/

		::System::Xml::Schema::XsdDateTime_DateTimeTypeCode get_InternalTypeCode()
		{
			return ((::System::Xml::Schema::XsdDateTime_DateTimeTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::XsdDateTime_XsdDateTimeKind get_InternalKind()
		{
			return ((::System::Xml::Schema::XsdDateTime_XsdDateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET))(this);
		}

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET))(this);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET))(this);
		}

		::System::Int32 get_Fraction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET))(this);
		}

		::System::Int32 get_ZoneHour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET))(this);
		}

		::System::Int32 get_ZoneMinute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET))(this);
		}

		/*
		static ::System::DateTime op_Implicit(::System::Xml::Schema::XsdDateTime a1)
		{
			return ((::System::DateTime(*)(::System::Xml::Schema::XsdDateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::DateTimeOffset op_Implicit_1(::System::Xml::Schema::XsdDateTime a1)
		{
			return ((::System::DateTimeOffset(*)(::System::Xml::Schema::XsdDateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET))(this);
		}

		::System::Void PrintDate(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET))(this, a1);
		}

		::System::Void PrintTime(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET))(this, a1);
		}

		::System::Void PrintZone(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET))(this, a1);
		}

		::System::Void IntToCharArray(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ShortToCharArray(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET))(this, a1, a2, a3);
		}

	};
}
