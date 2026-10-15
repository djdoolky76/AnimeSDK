#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_FA2C0245CCBC6273_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E630)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_FA2C0245CCBC6273_TypeDefinitionIndex = 41358;

	class IsReadOnlyAttribute_FA2C0245CCBC6273 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_FA2C0245CCBC6273_CTOR_OFFSET))(this);
		}

	};
}
