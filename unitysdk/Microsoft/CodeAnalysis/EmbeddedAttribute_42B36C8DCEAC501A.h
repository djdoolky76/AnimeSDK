#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_42B36C8DCEAC501A_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CE610)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_42B36C8DCEAC501A : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_42B36C8DCEAC501A_CTOR_OFFSET))(this);
		}

	};
}
