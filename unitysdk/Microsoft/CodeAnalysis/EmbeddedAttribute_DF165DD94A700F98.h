#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_DF165DD94A700F98_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC4220)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_DF165DD94A700F98_TypeDefinitionIndex = 45899;

	class EmbeddedAttribute_DF165DD94A700F98 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_DF165DD94A700F98_CTOR_OFFSET))(this);
		}

	};
}
