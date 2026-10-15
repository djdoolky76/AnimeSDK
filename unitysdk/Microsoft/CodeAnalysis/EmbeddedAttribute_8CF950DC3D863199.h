#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8CF950DC3D863199_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E51D0)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_8CF950DC3D863199 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_8CF950DC3D863199_CTOR_OFFSET))(this);
		}

	};
}
