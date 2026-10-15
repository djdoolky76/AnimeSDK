#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_AE06BF4E8255DDFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7568F0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_AE06BF4E8255DDFB_TypeDefinitionIndex = 36085;

	class EmbeddedAttribute_AE06BF4E8255DDFB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_AE06BF4E8255DDFB_CTOR_OFFSET))(this);
		}

	};
}
