#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Xml/SmallXmlParser.h"
namespace Mono::Xml { class SmallXmlParser; }
namespace Mono::Xml { class SmallXmlParser_IAttrList; }
namespace System { class String; }
namespace System::Collections { class Stack; }
namespace System::Security { class SecurityElement; }

#define MONO_XML_SECURITYPARSER_CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD010)
#define MONO_XML_SECURITYPARSER_LOADXML_OFFSET UNITYSDK_OFFSET(0x17ADD080)
#define MONO_XML_SECURITYPARSER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x17AFE6D0)
#define MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x17AFE600)
#define MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x17AFE760)
#define MONO_XML_SECURITYPARSER_ONIGNORABLEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x17AFE240)
#define MONO_XML_SECURITYPARSER_ONPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x17AFE230)
#define MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x17AFE250)
#define MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x17AFE220)
#define MONO_XML_SECURITYPARSER_TOXML_OFFSET UNITYSDK_OFFSET(0x17AFE210)

namespace Mono::Xml
{
	inline static constexpr unsigned int SecurityParser_TypeDefinitionIndex = 23;

	class SecurityParser : public ::Mono::Xml::SmallXmlParser
	{
	public:
		::System::Collections::Stack* stack; // 0x60
		::System::Security::SecurityElement* current; // 0x68
		::System::Security::SecurityElement* root; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_CTOR_OFFSET))(this);
		}

		::System::Void LoadXml(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_LOADXML_OFFSET))(this, a1);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_TOXML_OFFSET))(this);
		}

		::System::Void OnStartParsing(::Mono::Xml::SmallXmlParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET))(this, a1);
		}

		::System::Void OnProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnIgnorableWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONIGNORABLEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void OnStartElement(::System::String* a1, ::Mono::Xml::SmallXmlParser_IAttrList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnEndElement(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET))(this, a1);
		}

		::System::Void OnChars(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONCHARS_OFFSET))(this, a1);
		}

		::System::Void OnEndParsing(::Mono::Xml::SmallXmlParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET))(this, a1);
		}

	};
}
