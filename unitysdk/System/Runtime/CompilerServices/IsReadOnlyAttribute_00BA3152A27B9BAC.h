#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_00BA3152A27B9BAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ACEB0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_00BA3152A27B9BAC_TypeDefinitionIndex = 36817;

	class IsReadOnlyAttribute_00BA3152A27B9BAC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_00BA3152A27B9BAC_CTOR_OFFSET))(this);
		}

	};
}
