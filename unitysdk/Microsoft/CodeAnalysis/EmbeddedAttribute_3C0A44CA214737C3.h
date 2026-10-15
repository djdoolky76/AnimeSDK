#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3C0A44CA214737C3_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53ACF0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_3C0A44CA214737C3_TypeDefinitionIndex = 41605;

	class EmbeddedAttribute_3C0A44CA214737C3 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3C0A44CA214737C3_CTOR_OFFSET))(this);
		}

	};
}
