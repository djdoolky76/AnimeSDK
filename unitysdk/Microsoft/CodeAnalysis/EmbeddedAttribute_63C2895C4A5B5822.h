#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_63C2895C4A5B5822_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED36210)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_63C2895C4A5B5822_TypeDefinitionIndex = 37944;

	class EmbeddedAttribute_63C2895C4A5B5822 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_63C2895C4A5B5822_CTOR_OFFSET))(this);
		}

	};
}
