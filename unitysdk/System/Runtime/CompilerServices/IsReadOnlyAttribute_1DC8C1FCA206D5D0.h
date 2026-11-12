#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_1DC8C1FCA206D5D0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4F10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_1DC8C1FCA206D5D0_TypeDefinitionIndex = 36798;

	class IsReadOnlyAttribute_1DC8C1FCA206D5D0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_1DC8C1FCA206D5D0_CTOR_OFFSET))(this);
		}

	};
}
