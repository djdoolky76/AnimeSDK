#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_7750DD15638DFAA8_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E620)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_7750DD15638DFAA8_TypeDefinitionIndex = 41357;

	class EmbeddedAttribute_7750DD15638DFAA8 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_7750DD15638DFAA8_CTOR_OFFSET))(this);
		}

	};
}
