#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E54BBF7376009DCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED87100)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_E54BBF7376009DCD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E54BBF7376009DCD_CTOR_OFFSET))(this);
		}

	};
}
