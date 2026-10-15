#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_F31C37BDE390E92D_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED6FF50)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_F31C37BDE390E92D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_F31C37BDE390E92D_CTOR_OFFSET))(this);
		}

	};
}
