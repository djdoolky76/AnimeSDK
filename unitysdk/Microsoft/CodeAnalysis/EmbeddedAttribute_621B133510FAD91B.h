#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_621B133510FAD91B_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDD280)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_621B133510FAD91B : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_621B133510FAD91B_CTOR_OFFSET))(this);
		}

	};
}
