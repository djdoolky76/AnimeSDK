#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_CB6365C3C03D3D5C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE810F0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsReadOnlyAttribute_CB6365C3C03D3D5C_TypeDefinitionIndex = 6675;

	class IsReadOnlyAttribute_CB6365C3C03D3D5C : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_CB6365C3C03D3D5C_CTOR_OFFSET))(this);
		}

	};
}
