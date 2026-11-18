#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C69953DA976357B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF8DD0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_C69953DA976357B9_TypeDefinitionIndex = 30953;

	class EmbeddedAttribute_C69953DA976357B9 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C69953DA976357B9__CTOR_OFFSET))(this);
		}
	};
}
