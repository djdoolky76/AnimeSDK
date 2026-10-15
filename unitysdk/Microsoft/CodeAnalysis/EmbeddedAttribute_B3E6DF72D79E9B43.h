#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_B3E6DF72D79E9B43_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B7E10)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_B3E6DF72D79E9B43_TypeDefinitionIndex = 40345;

	class EmbeddedAttribute_B3E6DF72D79E9B43 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_B3E6DF72D79E9B43_CTOR_OFFSET))(this);
		}

	};
}
