#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DISALLOWNULLATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8FB0)

namespace System::Diagnostics::CodeAnalysis
{
	class DisallowNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DISALLOWNULLATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
