#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Object.h"

namespace MS::Internal::Xml::Cache { class XPathNodePageInfo; }
namespace System { class String; }
namespace System::Xml::XPath { class XPathDocument; }

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeInfoAtom_TypeDefinitionIndex = 1658;

	class XPathNodeInfoAtom : public ::System::Object
	{
	public:
		::System::String* localName; // 0x10
		::System::String* namespaceUri; // 0x18
		::System::Xml::XPath::XPathDocument* doc; // 0x20
		::System::String* prefix; // 0x28
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageSibling; // 0x30
		::MS::Internal::Xml::Cache::XPathNodePageInfo* pageInfo; // 0x38
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageParent; // 0x40
		::System::Int32 linePosBase; // 0x48
		::System::Int32 lineNumBase; // 0x4C
	};
}
