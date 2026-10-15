#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8B11128C8FB97BD6_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8FCB0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_8B11128C8FB97BD6_TypeDefinitionIndex = 25047;

	class EmbeddedAttribute_8B11128C8FB97BD6 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8B11128C8FB97BD6_CTOR_OFFSET))(this);
		}

	};
}
