#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_988A3238B9E51E5C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F608440)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_988A3238B9E51E5C_TypeDefinitionIndex = 44707;

	class EmbeddedAttribute_988A3238B9E51E5C : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_988A3238B9E51E5C_CTOR_OFFSET))(this);
		}

	};
}
