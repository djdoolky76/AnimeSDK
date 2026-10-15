#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_499E5F47BACD8D9E_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6640)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_499E5F47BACD8D9E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_499E5F47BACD8D9E_CTOR_OFFSET))(this);
		}

	};
}
