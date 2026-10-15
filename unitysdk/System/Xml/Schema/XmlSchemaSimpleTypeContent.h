#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPECONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEE9C50)

namespace System::Xml::Schema
{
	class XmlSchemaSimpleTypeContent : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPECONTENT_CTOR_OFFSET))(this);
		}

	};
}
