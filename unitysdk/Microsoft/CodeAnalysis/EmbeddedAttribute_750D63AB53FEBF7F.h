#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_750D63AB53FEBF7F_CTOR_OFFSET UNITYSDK_OFFSET(0x1C33F460)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_750D63AB53FEBF7F_TypeDefinitionIndex = 41336;

	class EmbeddedAttribute_750D63AB53FEBF7F : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_750D63AB53FEBF7F_CTOR_OFFSET))(this);
		}

	};
}
