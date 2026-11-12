#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x201775E0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x20177720)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x20177840)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x20177760)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x20177820)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET UNITYSDK_OFFSET(0x201778A0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x201777D0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET UNITYSDK_OFFSET(0x20177860)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x201778F0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET UNITYSDK_OFFSET(0x201778C0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x20177800)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x20177880)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET UNITYSDK_OFFSET(0x201777E0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x201778E0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x20177850)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET UNITYSDK_OFFSET(0x20177910)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x20177830)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET UNITYSDK_OFFSET(0x201778B0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET UNITYSDK_OFFSET(0x20177870)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x20177900)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET UNITYSDK_OFFSET(0x201778D0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x20177810)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x20177890)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET UNITYSDK_OFFSET(0x201777F0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET UNITYSDK_OFFSET(0x20177700)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET UNITYSDK_OFFSET(0x20177740)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x20177690)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x20177680)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET UNITYSDK_OFFSET(0x201776F0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET UNITYSDK_OFFSET(0x201776A0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x201777B0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x201777C0)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x20177660)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x20177790)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x20177780)
#define SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x201777A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaEntity_TypeDefinitionIndex = 2174;

	class SchemaEntity : public ::System::Object
	{
	public:
		::System::String* baseURI; // 0x10
		::System::Xml::XmlQualifiedName* qname; // 0x18
		::System::String* pubid; // 0x20
		::System::String* url; // 0x28
		::System::String* text; // 0x30
		::System::String* declaredURI; // 0x38
		::System::Xml::XmlQualifiedName* ndata; // 0x40
		::System::Int32 linePosition; // 0x48
		::System::Boolean isDeclaredInExternal; // 0x4C
		::System::Boolean parsingInProgress; // 0x4D
		::System::Boolean isExternal; // 0x4E
		::System::Boolean isParameter; // 0x4F
		::System::Int32 lineNumber; // 0x50
		::System::Void _ctor(::System::Xml::XmlQualifiedName* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsUnparsedEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET))(this);
		}

		::System::Boolean System_Xml_IDtdEntityInfo_get_IsParameterEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_BaseUriString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_DeclaredUriString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_SystemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_PublicId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET))(this);
		}

		::System::String* System_Xml_IDtdEntityInfo_get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdEntityInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IDtdEntityInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_URL_OFFSET))(this, a1);
		}

		::System::String* get_Pubid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PUBID_OFFSET))(this);
		}

		::System::Void set_Pubid(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PUBID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_ISEXTERNAL_OFFSET))(this);
		}

		::System::Void set_IsExternal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_ISEXTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean get_DeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Void set_DeclaredInExternal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDINEXTERNAL_OFFSET))(this, a1);
		}

		::System::Xml::XmlQualifiedName* get_NData()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_NDATA_OFFSET))(this);
		}

		::System::Void set_NData(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_NDATA_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Line()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_LINE_OFFSET))(this);
		}

		::System::Void set_Line(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_LINE_OFFSET))(this, a1);
		}

		::System::Int32 get_Pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_POS_OFFSET))(this, a1);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_BASEURI_OFFSET))(this);
		}

		::System::Void set_BaseURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_BASEURI_OFFSET))(this, a1);
		}

		::System::Boolean get_ParsingInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_PARSINGINPROGRESS_OFFSET))(this);
		}

		::System::Void set_ParsingInProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_PARSINGINPROGRESS_OFFSET))(this, a1);
		}

		::System::String* get_DeclaredURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_GET_DECLAREDURI_OFFSET))(this);
		}

		::System::Void set_DeclaredURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAENTITY_SET_DECLAREDURI_OFFSET))(this, a1);
		}

	};
}
