#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_0A24B6960E727116_CTOR_OFFSET UNITYSDK_OFFSET(0x1C52A310)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_0A24B6960E727116 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_0A24B6960E727116_CTOR_OFFSET))(this);
		}

	};
}
