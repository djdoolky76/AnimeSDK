#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8461DE5A1FF55884_CTOR_OFFSET UNITYSDK_OFFSET(0x1F113510)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_8461DE5A1FF55884_TypeDefinitionIndex = 45182;

	class EmbeddedAttribute_8461DE5A1FF55884 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8461DE5A1FF55884_CTOR_OFFSET))(this);
		}

	};
}
