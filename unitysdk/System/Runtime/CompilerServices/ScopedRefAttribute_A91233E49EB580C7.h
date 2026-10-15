#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_SCOPEDREFATTRIBUTE_A91233E49EB580C7_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9110)

namespace System::Runtime::CompilerServices
{
	class ScopedRefAttribute_A91233E49EB580C7 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SCOPEDREFATTRIBUTE_A91233E49EB580C7_CTOR_OFFSET))(this);
		}

	};
}
