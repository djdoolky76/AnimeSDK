#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Xml/MiniParser.h"

namespace Mono::Xml { class MiniParser_IAttrList; }
namespace System { class String; }
namespace System::Collections { class Stack; }
namespace System::Security { class SecurityElement; }

#define MONO_XML_SECURITYPARSER_AD66295618F229F0_LOADXML_OFFSET UNITYSDK_OFFSET(0x1FD3C420)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0_ONCHARS_OFFSET UNITYSDK_OFFSET(0x1FD3C810)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1FD3C780)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x1FD3C8A0)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1FD3C520)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x1FD3C510)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0_READ_OFFSET UNITYSDK_OFFSET(0x1FD3C480)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0_TOXML_OFFSET UNITYSDK_OFFSET(0x1FD3C470)
#define MONO_XML_SECURITYPARSER_AD66295618F229F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD3C320)

namespace Mono::Xml
{
	inline static constexpr unsigned int SecurityParser_AD66295618F229F0_TypeDefinitionIndex = 2269;

	class SecurityParser_AD66295618F229F0 : public ::Mono::Xml::MiniParser
	{
	public:
		::System::Security::SecurityElement* root; // 0x28
		::System::Collections::Stack* stack; // 0x30
		::System::Security::SecurityElement* current; // 0x38
		::System::String* xmldoc; // 0x40
		::System::Int32 pos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0__CTOR_OFFSET))(this);
		}

		::System::Void LoadXml(::System::String* xml)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_LOADXML_OFFSET))(this, xml);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_TOXML_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_READ_OFFSET))(this);
		}

		::System::Void OnStartParsing(::Mono::Xml::MiniParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_ONSTARTPARSING_OFFSET))(this, parser);
		}

		::System::Void OnStartElement(::System::String* name, ::Mono::Xml::MiniParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::MiniParser_IAttrList*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_ONSTARTELEMENT_OFFSET))(this, name, attrs);
		}

		::System::Void OnEndElement(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_ONENDELEMENT_OFFSET))(this, name);
		}

		::System::Void OnChars(::System::String* ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_ONCHARS_OFFSET))(this, ch);
		}

		::System::Void OnEndParsing(::Mono::Xml::MiniParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser*))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_AD66295618F229F0_ONENDPARSING_OFFSET))(this, parser);
		}
	};
}
