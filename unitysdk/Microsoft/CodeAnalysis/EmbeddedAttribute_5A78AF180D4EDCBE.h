#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5A78AF180D4EDCBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBC720)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_5A78AF180D4EDCBE_TypeDefinitionIndex = 37458;

	class EmbeddedAttribute_5A78AF180D4EDCBE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5A78AF180D4EDCBE_CTOR_OFFSET))(this);
		}

	};
}
