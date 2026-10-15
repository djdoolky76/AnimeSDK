#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_031BCB2878FA4562_CTOR_OFFSET UNITYSDK_OFFSET(0x167638B0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_031BCB2878FA4562_TypeDefinitionIndex = 9977;

	class EmbeddedAttribute_031BCB2878FA4562 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_031BCB2878FA4562_CTOR_OFFSET))(this);
		}

	};
}
