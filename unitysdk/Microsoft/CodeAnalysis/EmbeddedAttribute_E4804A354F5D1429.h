#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E4804A354F5D1429_CTOR_OFFSET UNITYSDK_OFFSET(0x1F609EE0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_E4804A354F5D1429_TypeDefinitionIndex = 38886;

	class EmbeddedAttribute_E4804A354F5D1429 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_E4804A354F5D1429_CTOR_OFFSET))(this);
		}

	};
}
