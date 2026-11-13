#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_SCOPEDREFATTRIBUTE_F416E093031C347D_CTOR_OFFSET UNITYSDK_OFFSET(0x208D6AB0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ScopedRefAttribute_F416E093031C347D_TypeDefinitionIndex = 6186;

	class ScopedRefAttribute_F416E093031C347D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SCOPEDREFATTRIBUTE_F416E093031C347D_CTOR_OFFSET))(this);
		}

	};
}
