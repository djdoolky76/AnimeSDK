#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_A481FB12B07A42B0_CTOR_OFFSET UNITYSDK_OFFSET(0x1F191DE0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_A481FB12B07A42B0_TypeDefinitionIndex = 44324;

	class EmbeddedAttribute_A481FB12B07A42B0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_A481FB12B07A42B0_CTOR_OFFSET))(this);
		}

	};
}
