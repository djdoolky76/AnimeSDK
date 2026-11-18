#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class DatatypeImplementation; }
namespace System::Xml::Schema { class RestrictionFacets; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaFacet; }
namespace System::Xml::Schema { class XmlSchemaPatternFacet; }

#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_CHECKDUPFLAG_OFFSET UNITYSDK_OFFSET(0x976640)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_CHECKPROHIBITEDFLAG_OFFSET UNITYSDK_OFFSET(0x9765B0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x976570)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEENUMERATIONFACET_OFFSET UNITYSDK_OFFSET(0x9764E0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEFACETCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0x976580)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEFRACTIONDIGITSFACET_OFFSET UNITYSDK_OFFSET(0x976550)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILELENGTHFACET_OFFSET UNITYSDK_OFFSET(0x9764A0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMAXEXCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x976510)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMAXINCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x976500)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMAXLENGTHFACET_OFFSET UNITYSDK_OFFSET(0x9764C0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMINEXCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x976530)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMININCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x976520)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMINLENGTHFACET_OFFSET UNITYSDK_OFFSET(0x9764B0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEPATTERNFACET_OFFSET UNITYSDK_OFFSET(0x9764D0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILETOTALDIGITSFACET_OFFSET UNITYSDK_OFFSET(0x976540)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9764F0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COPYFACETSFROMBASETYPE_OFFSET UNITYSDK_OFFSET(0x976590)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_FINISHFACETCOMPILE_OFFSET UNITYSDK_OFFSET(0x976560)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_PARSEFACETVALUE_OFFSET UNITYSDK_OFFSET(0x9765A0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1F4C9660)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x976700)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x9766D0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4CA160)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER__CTOR_OFFSET UNITYSDK_OFFSET(0x976490)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int FacetsChecker_FacetsCompiler_TypeDefinitionIndex = 2052;

	struct alignas(8) FacetsChecker_FacetsCompiler
	{
		static ::Il2CppArray<::System::Object*>** StaticGet_c_map()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FacetsChecker_FacetsCompiler_TypeDefinitionIndex)->GetStaticField(0x1DE0);
		}
		::System::Xml::Schema::DatatypeImplementation* datatype; // 0x10
		::System::Xml::Schema::RestrictionFacets* derivedRestriction; // 0x18
		::System::Xml::Schema::RestrictionFlags baseFlags; // 0x20
		::System::Xml::Schema::RestrictionFlags baseFixedFlags; // 0x24
		::System::Xml::Schema::RestrictionFlags validRestrictionFlags; // 0x28
		::System::Byte _padding0[0x4];
		::System::Xml::Schema::XmlSchemaDatatype* nonNegativeInt; // 0x30
		::System::Xml::Schema::XmlSchemaDatatype* builtInType; // 0x38
		::System::Xml::Schema::XmlTypeCode builtInEnum; // 0x40
		::System::Boolean firstPattern; // 0x44
		::System::Byte _padding1[0x3];
		::System::Text::StringBuilder* regStr; // 0x48
		::System::Xml::Schema::XmlSchemaPatternFacet* pattern_facet; // 0x50

		::System::Void _ctor(::System::Xml::Schema::DatatypeImplementation* baseDatatype, ::System::Xml::Schema::RestrictionFacets* restriction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::RestrictionFacets*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER__CTOR_OFFSET))(this, baseDatatype, restriction);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER__CCTOR_OFFSET))();
		}

		::System::Void CompileLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILELENGTHFACET_OFFSET))(this, facet);
		}

		::System::Void CompileMinLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMINLENGTHFACET_OFFSET))(this, facet);
		}

		::System::Void CompileMaxLengthFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMAXLENGTHFACET_OFFSET))(this, facet);
		}

		::System::Void CompilePatternFacet(::System::Xml::Schema::XmlSchemaPatternFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaPatternFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEPATTERNFACET_OFFSET))(this, facet);
		}

		::System::Void CompileEnumerationFacet(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEENUMERATIONFACET_OFFSET))(this, facet, nsmgr, nameTable);
		}

		::System::Void CompileWhitespaceFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEWHITESPACEFACET_OFFSET))(this, facet);
		}

		::System::Void CompileMaxInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMAXINCLUSIVEFACET_OFFSET))(this, facet);
		}

		::System::Void CompileMaxExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMAXEXCLUSIVEFACET_OFFSET))(this, facet);
		}

		::System::Void CompileMinInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMININCLUSIVEFACET_OFFSET))(this, facet);
		}

		::System::Void CompileMinExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEMINEXCLUSIVEFACET_OFFSET))(this, facet);
		}

		::System::Void CompileTotalDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILETOTALDIGITSFACET_OFFSET))(this, facet);
		}

		::System::Void CompileFractionDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEFRACTIONDIGITSFACET_OFFSET))(this, facet);
		}

		::System::Void FinishFacetCompile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_FINISHFACETCOMPILE_OFFSET))(this);
		}

		::System::Void CheckValue(::System::Object* value, ::System::Xml::Schema::XmlSchemaFacet* facet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaFacet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_CHECKVALUE_OFFSET))(this, value, facet);
		}

		::System::Void CompileFacetCombinations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COMPILEFACETCOMBINATIONS_OFFSET))(this);
		}

		::System::Void CopyFacetsFromBaseType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_COPYFACETSFROMBASETYPE_OFFSET))(this);
		}

		::System::Object* ParseFacetValue(::System::Xml::Schema::XmlSchemaDatatype* datatype, ::System::Xml::Schema::XmlSchemaFacet* facet, ::System::String* code, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaFacet*, ::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_PARSEFACETVALUE_OFFSET))(this, datatype, facet, code, nsmgr, nameTable);
		}

		static ::System::String* Preprocess(::System::String* pattern)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_PREPROCESS_OFFSET))(pattern);
		}

		::System::Void CheckProhibitedFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag, ::System::String* errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_CHECKPROHIBITEDFLAG_OFFSET))(this, facet, flag, errorCode);
		}

		::System::Void CheckDupFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag, ::System::String* errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_CHECKDUPFLAG_OFFSET))(this, facet, flag, errorCode);
		}

		::System::Void SetFlag(::System::Xml::Schema::XmlSchemaFacet* facet, ::System::Xml::Schema::RestrictionFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_SETFLAG_OFFSET))(this, facet, flag);
		}

		::System::Void SetFlag_1(::System::Xml::Schema::RestrictionFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::RestrictionFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_SETFLAG_1_OFFSET))(this, flag);
		}
	};
}
