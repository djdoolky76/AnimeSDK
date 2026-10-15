#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_393D1284F9D1B82A_CTOR_OFFSET UNITYSDK_OFFSET(0x1F29BAA0)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_393D1284F9D1B82A : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_393D1284F9D1B82A_CTOR_OFFSET))(this);
		}

	};
}
