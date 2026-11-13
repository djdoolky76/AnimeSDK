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

#define SYSTEM_XML_SCHEMA_XSDDATETIME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C666500)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EED5E0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3EED8A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3EED8B0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_4_OFFSET UNITYSDK_OFFSET(0x3EED8E0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_CTOR_OFFSET UNITYSDK_OFFSET(0x3EED5D0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3E8F8A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET UNITYSDK_OFFSET(0x3EED900)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x3E8F9F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x3ED7F40)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET UNITYSDK_OFFSET(0x3ED7F50)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x3E8FAC0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x3E8FB00)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3E8FC30)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x3E8FCB0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET UNITYSDK_OFFSET(0x3E6AA20)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET UNITYSDK_OFFSET(0x3DAFFA0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET UNITYSDK_OFFSET(0x3EED740)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x3EEDC10)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1C64DAB0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C64C8F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET UNITYSDK_OFFSET(0x3EEDBE0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET UNITYSDK_OFFSET(0x3EEDBF0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET UNITYSDK_OFFSET(0x3EEDC00)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x3EEDCA0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EEDBD0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1C664E70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_TypeDefinitionIndex = 2234;

	struct alignas(4) XsdDateTime
	{
		::System::DateTime dt; // 0x10
		::System::UInt32 extra; // 0x18
		static ::Il2CppArray<::System::Xml::Schema::XmlTypeCode>** StaticGet_typeCodes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlTypeCode>**)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x21390);
		}

		static ::System::Int32* StaticGet_Lz_zz()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7820);
		}

		static ::System::Int32* StaticGet_Lz__mm()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7824);
		}

		static ::System::Int32* StaticGet_Lz__mm_dd()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7828);
		}

		static ::System::Int32* StaticGet_Lz__mm_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x782C);
		}

		static ::System::Int32* StaticGet_Lz__()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7830);
		}

		static ::System::Int32* StaticGet_Lz___dd()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7834);
		}

		static ::System::Int32* StaticGet_LzHH()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7838);
		}

		static ::System::Int32* StaticGet_Lzyyyy_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x783C);
		}

		static ::System::Int32* StaticGet_Lz__mm__()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7840);
		}

		static ::System::Int32* StaticGet_LzHH_mm_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7844);
		}

		static ::System::Int32* StaticGet_Lz_zz_zz()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7848);
		}

		static ::System::Int32* StaticGet_Lz___()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x784C);
		}

		static ::System::Int32* StaticGet_Lz_zz_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7850);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM_dd()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7854);
		}

		static ::System::Int32* StaticGet_Lzyyyy()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7858);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x785C);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM_ddT()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7860);
		}

		static ::System::Int32* StaticGet_LzHH_mm_ss()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7864);
		}

		static ::System::Int32* StaticGet_LzHH_mm()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7868);
		}

		static ::System::Int32* StaticGet_Lz_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x786C);
		}

		static ::System::Int32* StaticGet_LzHH_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7870);
		}

		static ::System::Int32* StaticGet_Lzyyyy_MM_()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Xml.Schema", "XsdDateTime")->GetStaticField(0x7874);
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
