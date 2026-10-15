#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_299C0CA72B72A252_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE40C50)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_299C0CA72B72A252 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_299C0CA72B72A252_CTOR_OFFSET))(this);
		}

	};
}
