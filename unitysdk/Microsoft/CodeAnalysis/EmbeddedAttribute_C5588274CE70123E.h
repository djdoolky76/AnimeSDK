#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C5588274CE70123E_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE180)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_C5588274CE70123E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C5588274CE70123E_CTOR_OFFSET))(this);
		}

	};
}
