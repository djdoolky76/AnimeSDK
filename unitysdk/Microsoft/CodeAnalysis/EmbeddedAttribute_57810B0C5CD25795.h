#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_57810B0C5CD25795_CTOR_OFFSET UNITYSDK_OFFSET(0x16757950)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_57810B0C5CD25795_TypeDefinitionIndex = 40240;

	class EmbeddedAttribute_57810B0C5CD25795 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_57810B0C5CD25795_CTOR_OFFSET))(this);
		}

	};
}
