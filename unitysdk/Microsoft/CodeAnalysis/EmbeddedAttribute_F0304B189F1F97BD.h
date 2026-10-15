#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_F0304B189F1F97BD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD7AA10)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_F0304B189F1F97BD_TypeDefinitionIndex = 6174;

	class EmbeddedAttribute_F0304B189F1F97BD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_F0304B189F1F97BD_CTOR_OFFSET))(this);
		}

	};
}
