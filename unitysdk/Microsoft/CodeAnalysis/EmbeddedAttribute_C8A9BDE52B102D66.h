#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C8A9BDE52B102D66_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAF500)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_C8A9BDE52B102D66_TypeDefinitionIndex = 43913;

	class EmbeddedAttribute_C8A9BDE52B102D66 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C8A9BDE52B102D66_CTOR_OFFSET))(this);
		}

	};
}
