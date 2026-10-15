#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_EB9154B20231F224_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2CE0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_EB9154B20231F224_TypeDefinitionIndex = 5594;

	class EmbeddedAttribute_EB9154B20231F224 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_EB9154B20231F224_CTOR_OFFSET))(this);
		}

	};
}
