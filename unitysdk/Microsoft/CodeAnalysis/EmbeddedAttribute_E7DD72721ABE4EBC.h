#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E7DD72721ABE4EBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F158CD0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_E7DD72721ABE4EBC_TypeDefinitionIndex = 38717;

	class EmbeddedAttribute_E7DD72721ABE4EBC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E7DD72721ABE4EBC_CTOR_OFFSET))(this);
		}

	};
}
