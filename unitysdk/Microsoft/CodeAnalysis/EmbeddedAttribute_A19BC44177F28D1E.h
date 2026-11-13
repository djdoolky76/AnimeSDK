#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_A19BC44177F28D1E_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2338A0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_A19BC44177F28D1E_TypeDefinitionIndex = 48085;

	class EmbeddedAttribute_A19BC44177F28D1E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_A19BC44177F28D1E_CTOR_OFFSET))(this);
		}

	};
}
