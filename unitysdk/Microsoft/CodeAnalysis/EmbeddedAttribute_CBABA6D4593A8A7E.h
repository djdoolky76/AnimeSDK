#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_CBABA6D4593A8A7E_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6631B0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_CBABA6D4593A8A7E_TypeDefinitionIndex = 6065;

	class EmbeddedAttribute_CBABA6D4593A8A7E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_CBABA6D4593A8A7E_CTOR_OFFSET))(this);
		}

	};
}
