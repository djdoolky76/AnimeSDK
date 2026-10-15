#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2D5186D5A8959FF0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E5050)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_2D5186D5A8959FF0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_2D5186D5A8959FF0_CTOR_OFFSET))(this);
		}

	};
}
