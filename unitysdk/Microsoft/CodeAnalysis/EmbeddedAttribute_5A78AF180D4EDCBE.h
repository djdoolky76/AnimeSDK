#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5A78AF180D4EDCBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEAA20)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_5A78AF180D4EDCBE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_5A78AF180D4EDCBE_CTOR_OFFSET))(this);
		}

	};
}
