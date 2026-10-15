#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED87310)

namespace System::Diagnostics::CodeAnalysis
{
	class MaybeNullWhenAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ReturnValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
