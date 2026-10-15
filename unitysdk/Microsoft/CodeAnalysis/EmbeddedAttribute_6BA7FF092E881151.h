#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_6BA7FF092E881151_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC94020)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_6BA7FF092E881151 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_6BA7FF092E881151_CTOR_OFFSET))(this);
		}

	};
}
