#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XObjectWrapper.h"
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Xml::Linq { class XAttribute; }

#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D508420)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D5083B0)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1D508510)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1D5085A0)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1D508630)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D508490)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XAttributeWrapper_TypeDefinitionIndex = 9851;

	class XAttributeWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper
	{
	public:
		::System::Void _ctor(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_CTOR_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XAttribute* get_Attribute()
		{
			return ((::System::Xml::Linq::XAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_PARENTNODE_OFFSET))(this);
		}

	};
}
