#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_FE8539B1BBD0591E_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF630)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_FE8539B1BBD0591E_TypeDefinitionIndex = 9868;

	class EmbeddedAttribute_FE8539B1BBD0591E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_FE8539B1BBD0591E_CTOR_OFFSET))(this);
		}

	};
}
