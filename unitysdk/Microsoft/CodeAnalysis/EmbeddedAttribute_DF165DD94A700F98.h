#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_DF165DD94A700F98_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF1A90)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_DF165DD94A700F98 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_DF165DD94A700F98_CTOR_OFFSET))(this);
		}

	};
}
