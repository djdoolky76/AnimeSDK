#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_7B75ED28BAC839F6_CTOR_OFFSET UNITYSDK_OFFSET(0x1F379520)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_7B75ED28BAC839F6 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_7B75ED28BAC839F6_CTOR_OFFSET))(this);
		}

	};
}
