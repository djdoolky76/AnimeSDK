#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_D17848F0B01D3DBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE530)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_D17848F0B01D3DBB_TypeDefinitionIndex = 10168;

	class EmbeddedAttribute_D17848F0B01D3DBB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_D17848F0B01D3DBB_CTOR_OFFSET))(this);
		}

	};
}
