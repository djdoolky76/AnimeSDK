#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Base64Encoder.h"
namespace System::Xml { class XmlTextEncoder; }

#define SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA62D0)
#define SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1EFA7E40)

namespace System::Xml
{
	class XmlTextWriterBase64Encoder : public ::System::Xml::Base64Encoder
	{
	public:
		::System::Xml::XmlTextEncoder* xmlTextEncoder; // 0x28
		::System::Void _ctor(::System::Xml::XmlTextEncoder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTextEncoder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_CTOR_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

	};
}
