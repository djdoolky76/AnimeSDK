#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5BAD131C36D7372D_CTOR_OFFSET UNITYSDK_OFFSET(0x208E0400)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_5BAD131C36D7372D_TypeDefinitionIndex = 44911;

	class EmbeddedAttribute_5BAD131C36D7372D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5BAD131C36D7372D_CTOR_OFFSET))(this);
		}

	};
}
