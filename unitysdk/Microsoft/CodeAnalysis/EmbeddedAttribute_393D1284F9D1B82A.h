#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_393D1284F9D1B82A_CTOR_OFFSET UNITYSDK_OFFSET(0x1F26DC40)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_393D1284F9D1B82A_TypeDefinitionIndex = 35436;

	class EmbeddedAttribute_393D1284F9D1B82A : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_393D1284F9D1B82A_CTOR_OFFSET))(this);
		}

	};
}
