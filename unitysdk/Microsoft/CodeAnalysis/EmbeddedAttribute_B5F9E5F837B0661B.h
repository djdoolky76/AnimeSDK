#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_B5F9E5F837B0661B_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF610)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_B5F9E5F837B0661B_TypeDefinitionIndex = 43816;

	class EmbeddedAttribute_B5F9E5F837B0661B : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_B5F9E5F837B0661B_CTOR_OFFSET))(this);
		}

	};
}
