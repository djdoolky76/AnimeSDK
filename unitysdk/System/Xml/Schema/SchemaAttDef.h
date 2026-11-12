#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SchemaAttDef_Reserve.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaAttDef; }

#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x201769E0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET UNITYSDK_OFFSET(0x201764A0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20175F10)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CTOR_OFFSET UNITYSDK_OFFSET(0x20175E10)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x201761D0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x20176240)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x20176220)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_RESERVED_OFFSET UNITYSDK_OFFSET(0x20176480)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x20176100)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x20176280)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x20176260)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x201762A0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x20176250)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x20176230)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x20176490)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x201762B0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x20176290)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x20176270)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x20176190)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISNONCDATATYPE_OFFSET UNITYSDK_OFFSET(0x20176070)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x201761A0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x20176050)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x20176060)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x20176030)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x20175FF0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUEEXPANDED_OFFSET UNITYSDK_OFFSET(0x201761B0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x201761F0)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINENUMBER_OFFSET UNITYSDK_OFFSET(0x20176200)
#define SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINEPOSITION_OFFSET UNITYSDK_OFFSET(0x20176210)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaAttDef_TypeDefinitionIndex = 2169;

	class SchemaAttDef : public ::System::Xml::Schema::SchemaDeclBase
	{
	public:
		::System::String* defExpanded; // 0x60
		::System::Int32 valueLineNum; // 0x68
		::System::Int32 lineNum; // 0x6C
		::System::Xml::Schema::SchemaAttDef_Reserve reserved; // 0x70
		::System::Int32 linePos; // 0x74
		::System::Int32 valueLinePos; // 0x78
		static ::System::Xml::Schema::SchemaAttDef** StaticGet_Empty()
		{
			return (::System::Xml::Schema::SchemaAttDef**)UnitySDK::FromName("System.Xml.Schema", "SchemaAttDef")->GetStaticField(0x2E910);
		}

		::System::Void _ctor(::System::Xml::XmlQualifiedName* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CCTOR_OFFSET))();
		}

		::System::String* System_Xml_IDtdAttributeInfo_get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_PREFIX_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdAttributeInfo_get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdAttributeInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdAttributeInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdAttributeInfo_get_IsNonCDataType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISNONCDATATYPE_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISDECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdAttributeInfo_get_IsXmlAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDATTRIBUTEINFO_GET_ISXMLATTRIBUTE_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUEEXPANDED_OFFSET))(this);
		}

		::System::Object* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_DEFAULTVALUETYPED_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SYSTEM_XML_IDTDDEFAULTATTRIBUTEINFO_GET_VALUELINEPOSITION_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Void set_LinePosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINEPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Void set_LineNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_LINENUMBER_OFFSET))(this, a1);
		}

		::System::Int32 get_ValueLinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINEPOSITION_OFFSET))(this);
		}

		::System::Void set_ValueLinePosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINEPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_ValueLineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_VALUELINENUMBER_OFFSET))(this);
		}

		::System::Void set_ValueLineNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_VALUELINENUMBER_OFFSET))(this, a1);
		}

		::System::String* get_DefaultValueExpanded()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_DEFAULTVALUEEXPANDED_OFFSET))(this);
		}

		::System::Void set_DefaultValueExpanded(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_DEFAULTVALUEEXPANDED_OFFSET))(this, a1);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Void set_TokenizedType(::System::Xml::XmlTokenizedType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_TOKENIZEDTYPE_OFFSET))(this, a1);
		}

		::System::Xml::Schema::SchemaAttDef_Reserve get_Reserved()
		{
			return ((::System::Xml::Schema::SchemaAttDef_Reserve(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_GET_RESERVED_OFFSET))(this);
		}

		::System::Void set_Reserved(::System::Xml::Schema::SchemaAttDef_Reserve a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef_Reserve))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_SET_RESERVED_OFFSET))(this, a1);
		}

		::System::Void CheckXmlSpace(::System::Xml::IValidationEventHandling* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IValidationEventHandling*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAATTDEF_CHECKXMLSPACE_OFFSET))(this, a1);
		}

	};
}
