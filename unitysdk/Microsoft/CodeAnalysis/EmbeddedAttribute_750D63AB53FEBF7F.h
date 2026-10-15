#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_750D63AB53FEBF7F_CTOR_OFFSET UNITYSDK_OFFSET(0x1C36DA90)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_750D63AB53FEBF7F : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_750D63AB53FEBF7F_CTOR_OFFSET))(this);
		}

	};
}
