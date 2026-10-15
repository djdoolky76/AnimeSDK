#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_FC4D4381116EB067_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDD6D0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_FC4D4381116EB067_TypeDefinitionIndex = 43976;

	class EmbeddedAttribute_FC4D4381116EB067 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_FC4D4381116EB067_CTOR_OFFSET))(this);
		}

	};
}
