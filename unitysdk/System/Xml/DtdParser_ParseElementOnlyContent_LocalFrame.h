#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/DtdParser_Token.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_LOCALFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE9C130)

namespace System::Xml
{
	class DtdParser_ParseElementOnlyContent_LocalFrame : public ::System::Object
	{
	public:
		::System::Int32 startParenEntityId; // 0x10
		::System::Xml::DtdParser_Token parsingSchema; // 0x14
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_LOCALFRAME_CTOR_OFFSET))(this, a1);
		}

	};
}
