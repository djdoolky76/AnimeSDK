#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }

#define MONO_XML_SMALLXMLPARSEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD1290)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParserException_TypeDefinitionIndex = 11196;

	class SmallXmlParserException : public ::System::SystemException
	{
	public:
		::System::Int32 line; // 0x90
		::System::Int32 column; // 0x94

		::System::Void _ctor(::System::String* B6018BB9F7294B44, ::System::Int32 E114CA251F811C75, ::System::Int32 EABDF3FA504D7966)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSEREXCEPTION__CTOR_OFFSET))(this, B6018BB9F7294B44, E114CA251F811C75, EABDF3FA504D7966);
		}
	};
}
