#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_CCA1E4BFD8609D1E_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC39900)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_CCA1E4BFD8609D1E_TypeDefinitionIndex = 35167;

	class EmbeddedAttribute_CCA1E4BFD8609D1E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_CCA1E4BFD8609D1E_CTOR_OFFSET))(this);
		}

	};
}
