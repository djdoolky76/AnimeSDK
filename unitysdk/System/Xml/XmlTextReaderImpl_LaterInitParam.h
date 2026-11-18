#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlTextReaderImpl_InitInputType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::IO { class TextReader; }
namespace System::Xml { class XmlParserContext; }
namespace System::Xml { class XmlResolver; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_LATERINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E796900)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_LaterInitParam_TypeDefinitionIndex = 1719;

	class XmlTextReaderImpl_LaterInitParam : public ::System::Object
	{
	public:
		::System::String* inputUriStr; // 0x10
		::System::Uri* inputbaseUri; // 0x18
		::System::Xml::XmlResolver* inputUriResolver; // 0x20
		::System::Xml::XmlParserContext* inputContext; // 0x28
		::Il2CppArray<::System::Byte>* inputBytes; // 0x30
		::System::IO::TextReader* inputTextReader; // 0x38
		::System::IO::Stream* inputStream; // 0x40
		::System::Xml::XmlTextReaderImpl_InitInputType initType; // 0x48
		::System::Boolean useAsync; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Int32 inputByteCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_LATERINITPARAM__CTOR_OFFSET))(this);
		}
	};
}
