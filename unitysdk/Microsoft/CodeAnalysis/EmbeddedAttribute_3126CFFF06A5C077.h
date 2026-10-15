#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3126CFFF06A5C077_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8E80)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_3126CFFF06A5C077 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3126CFFF06A5C077_CTOR_OFFSET))(this);
		}

	};
}
