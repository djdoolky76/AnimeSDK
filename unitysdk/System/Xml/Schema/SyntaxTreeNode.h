#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EECC8B0)
#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISRANGENODE_OFFSET UNITYSDK_OFFSET(0x1EECC8A0)

namespace System::Xml::Schema
{
	class SyntaxTreeNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRangeNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISRANGENODE_OFFSET))(this);
		}

	};
}
