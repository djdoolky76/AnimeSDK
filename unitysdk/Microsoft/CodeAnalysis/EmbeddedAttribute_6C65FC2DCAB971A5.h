#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_6C65FC2DCAB971A5_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4215A0)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_6C65FC2DCAB971A5 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_6C65FC2DCAB971A5_CTOR_OFFSET))(this);
		}

	};
}
