#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_60FEE7377615140F_CTOR_OFFSET UNITYSDK_OFFSET(0x1C343050)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_60FEE7377615140F_TypeDefinitionIndex = 41346;

	class EmbeddedAttribute_60FEE7377615140F : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_60FEE7377615140F_CTOR_OFFSET))(this);
		}

	};
}
