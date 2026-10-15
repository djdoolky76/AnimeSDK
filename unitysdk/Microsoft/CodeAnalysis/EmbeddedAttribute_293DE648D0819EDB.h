#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_293DE648D0819EDB_CTOR_OFFSET UNITYSDK_OFFSET(0x16737C40)

namespace Microsoft::CodeAnalysis
{
	class EmbeddedAttribute_293DE648D0819EDB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_293DE648D0819EDB_CTOR_OFFSET))(this);
		}

	};
}
