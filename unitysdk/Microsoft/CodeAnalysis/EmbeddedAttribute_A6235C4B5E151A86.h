#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_A6235C4B5E151A86_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E7A0)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_A6235C4B5E151A86 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_A6235C4B5E151A86_CTOR_OFFSET))(this);
		}

	};
}
