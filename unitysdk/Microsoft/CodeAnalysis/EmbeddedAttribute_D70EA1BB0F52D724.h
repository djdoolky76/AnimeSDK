#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_D70EA1BB0F52D724_CTOR_OFFSET UNITYSDK_OFFSET(0x166C7000)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_D70EA1BB0F52D724 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_D70EA1BB0F52D724_CTOR_OFFSET))(this);
		}

	};
}
