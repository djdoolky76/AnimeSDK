#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_DF69B07E79FCABF6_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB60A40)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_DF69B07E79FCABF6 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_DF69B07E79FCABF6_CTOR_OFFSET))(this);
		}

	};
}
