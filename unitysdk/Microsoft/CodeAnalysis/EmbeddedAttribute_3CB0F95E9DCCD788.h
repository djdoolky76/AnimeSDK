#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3CB0F95E9DCCD788_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE663F0)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_3CB0F95E9DCCD788 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_3CB0F95E9DCCD788_CTOR_OFFSET))(this);
		}

	};
}
