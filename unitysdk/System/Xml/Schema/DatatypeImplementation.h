#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatype.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatypeVariety.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class DatatypeImplementation; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class RestrictionFacets; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CCTOR_OFFSET UNITYSDK_OFFSET(0x20158720)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET UNITYSDK_OFFSET(0x201622E0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET UNITYSDK_OFFSET(0x20160450)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x20161ED0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x20162340)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x2015E590)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x20161760)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET UNITYSDK_OFFSET(0x20161580)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x201614F0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET UNITYSDK_OFFSET(0x20161BF0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x20162240)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x20161430)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x20162040)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x20161EE0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0x20162030)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x20161FD0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x20162020)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET UNITYSDK_OFFSET(0x20161490)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x20161F40)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x20161FE0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x20162010)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x20161E40)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x20162050)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x20161660)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_TypeDefinitionIndex = 2089;

	class DatatypeImplementation : public ::System::Xml::Schema::XmlSchemaDatatype
	{
	public:
		::System::Xml::Schema::XmlSchemaType* parentSchemaType; // 0x10
		::System::Xml::Schema::XmlValueConverter* valueConverter; // 0x18
		::System::Xml::Schema::DatatypeImplementation* baseType; // 0x20
		::System::Xml::Schema::RestrictionFacets* restriction; // 0x28
		::System::Xml::Schema::XmlSchemaDatatypeVariety variety; // 0x30
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C010);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_char()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C018);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_base64Binary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C020);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C028);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_long()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C030);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_language()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C038);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_float()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C040);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_qnameFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C048);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_c_XdrTypes()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C050);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_binaryFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C058);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_yearMonthDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C060);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonth()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C068);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_integer()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C070);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_c_XsdTypes()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C078);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_time()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C080);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedShort()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C088);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_miscFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C090);
		}

		static ::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>** StaticGet_enumToTypeCode()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C098);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedInt()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0A0);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_listFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0A8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKEN()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0B0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_fixed()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0B8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_year()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0C0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENUMERATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0C8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKENS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0D0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0D8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_decimal()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0E0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_string()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0E8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_byte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0F0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonPositiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C0F8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyURI()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C100);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedStringV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C108);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_double()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C110);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_untypedAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C118);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREF()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C120);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_doubleXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C128);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedByte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C130);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_dayTimeDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C138);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QNameXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C140);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_short()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C148);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C150);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_boolean()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C158);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_day()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C160);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anySimpleType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C168);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_unionFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C170);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C178);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_uuid()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C180);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_untypedAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C188);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_floatXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C190);
		}

		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypesXsd()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C198);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREFS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1A0);
		}

		static ::System::Collections::Hashtable** StaticGet_builtinTypes()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1A8);
		}

		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnyType()
		{
			return (::System::Xml::XmlQualifiedName**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1B0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonthDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1B8);
		}

		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnySimpleType()
		{
			return (::System::Xml::XmlQualifiedName**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1C0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anySimpleType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1C8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_month()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1D0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ID()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1D8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedString()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1E0);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric2FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1E8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_positiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1F0);
		}

		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C1F8);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_int()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C200);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dayTimeDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C208);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonNegativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C210);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_token()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C218);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_negativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C220);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NOTATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C228);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_tokenV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C230);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_durationFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C238);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_duration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C240);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTime()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C248);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_monthDay()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C250);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_stringFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C258);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_date()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C260);
		}

		static ::System::Xml::Schema::FacetsChecker** StaticGet_dateTimeFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C268);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_Name()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C270);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anyAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C278);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NCName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C280);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_hexBinary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C288);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITY()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C290);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C298);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITIES()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C2A0);
		}

		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedLong()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)UnitySDK::FromName("System.Xml.Schema", "DatatypeImplementation")->GetStaticField(0x2C2A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* get_AnySimpleType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* get_UntypedAtomicType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET))();
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType a1)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET))(a1);
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromTypeName(::System::String* a1)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET))(a1);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(::System::Xml::XmlQualifiedName* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void FinishBuiltinType(::System::Xml::Schema::XmlSchemaSimpleType* a1, ::System::Xml::Schema::XmlSchemaSimpleType* a2)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void CreateBuiltinTypes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(::System::Xml::Schema::XmlTypeCode a1)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET))(a1);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Int32 a1, ::System::Xml::Schema::XmlSchemaType* a2)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEqual(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET))(this, a1, a2);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET))(this, a1);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatypeVariety(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::RestrictionFacets* get_Restriction()
		{
			return ((::System::Xml::Schema::RestrictionFacets*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET))(this);
		}

		::System::Int32 Compare(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
