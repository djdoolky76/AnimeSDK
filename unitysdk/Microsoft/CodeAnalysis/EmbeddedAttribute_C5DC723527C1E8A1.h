#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C5DC723527C1E8A1_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE53690)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_C5DC723527C1E8A1_TypeDefinitionIndex = 3873;

	class EmbeddedAttribute_C5DC723527C1E8A1 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C5DC723527C1E8A1_CTOR_OFFSET))(this);
		}

	};
}
