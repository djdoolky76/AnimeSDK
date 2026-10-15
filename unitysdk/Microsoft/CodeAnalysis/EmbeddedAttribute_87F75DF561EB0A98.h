#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_87F75DF561EB0A98_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF6B20)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_87F75DF561EB0A98 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_87F75DF561EB0A98_CTOR_OFFSET))(this);
		}

	};
}
