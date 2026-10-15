#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_4FC6EB17DF3ECB7E_CTOR_OFFSET UNITYSDK_OFFSET(0x1F163D80)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_4FC6EB17DF3ECB7E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_4FC6EB17DF3ECB7E_CTOR_OFFSET))(this);
		}

	};
}
