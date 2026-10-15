#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE9EF70)
#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISRANGENODE_OFFSET UNITYSDK_OFFSET(0x1EE9EF60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SyntaxTreeNode_TypeDefinitionIndex = 2068;

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
