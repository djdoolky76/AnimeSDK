#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_SCOPEDREFATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F691310)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ScopedRefAttribute_TypeDefinitionIndex = 6070;

	class ScopedRefAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SCOPEDREFATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
