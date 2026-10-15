#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8BB0EDAAAFF6AF0E_CTOR_OFFSET UNITYSDK_OFFSET(0x166A70A0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_8BB0EDAAAFF6AF0E_TypeDefinitionIndex = 39709;

	class EmbeddedAttribute_8BB0EDAAAFF6AF0E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8BB0EDAAAFF6AF0E_CTOR_OFFSET))(this);
		}

	};
}
