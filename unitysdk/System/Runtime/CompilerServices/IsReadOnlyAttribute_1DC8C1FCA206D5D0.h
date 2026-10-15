#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_1DC8C1FCA206D5D0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F00A0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_1DC8C1FCA206D5D0_TypeDefinitionIndex = 35870;

	class IsReadOnlyAttribute_1DC8C1FCA206D5D0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_1DC8C1FCA206D5D0_CTOR_OFFSET))(this);
		}

	};
}
