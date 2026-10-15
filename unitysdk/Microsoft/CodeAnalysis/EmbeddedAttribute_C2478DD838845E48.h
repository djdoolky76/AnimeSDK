#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C2478DD838845E48_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC911A0)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_C2478DD838845E48 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_C2478DD838845E48_CTOR_OFFSET))(this);
		}

	};
}
