#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_558C8D9DB02215CD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C421570)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_558C8D9DB02215CD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_558C8D9DB02215CD_CTOR_OFFSET))(this);
		}

	};
}
