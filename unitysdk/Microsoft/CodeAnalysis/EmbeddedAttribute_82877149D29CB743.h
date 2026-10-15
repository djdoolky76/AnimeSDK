#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_82877149D29CB743_CTOR_OFFSET UNITYSDK_OFFSET(0x1F163A40)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_82877149D29CB743 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_82877149D29CB743_CTOR_OFFSET))(this);
		}

	};
}
