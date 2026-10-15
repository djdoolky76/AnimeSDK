#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E54BBF7376009DCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED597A0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_E54BBF7376009DCD_TypeDefinitionIndex = 6571;

	class EmbeddedAttribute_E54BBF7376009DCD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E54BBF7376009DCD_CTOR_OFFSET))(this);
		}

	};
}
