#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_03AB565EDEDF0640_CTOR_OFFSET UNITYSDK_OFFSET(0x1C426ED0)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_03AB565EDEDF0640 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_03AB565EDEDF0640_CTOR_OFFSET))(this);
		}

	};
}
