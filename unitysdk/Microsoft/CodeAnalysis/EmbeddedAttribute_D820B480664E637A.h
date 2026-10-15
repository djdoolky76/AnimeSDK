#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_D820B480664E637A_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC53990)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_D820B480664E637A_TypeDefinitionIndex = 9949;

	class EmbeddedAttribute_D820B480664E637A : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_D820B480664E637A_CTOR_OFFSET))(this);
		}

	};
}
