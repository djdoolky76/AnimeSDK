#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_430AB3E7FDB47ED7_CTOR_OFFSET UNITYSDK_OFFSET(0x1F186C80)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_430AB3E7FDB47ED7 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_430AB3E7FDB47ED7_CTOR_OFFSET))(this);
		}

	};
}
