#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComInterfaceType.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_INTERFACETYPEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C9370)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int InterfaceTypeAttribute_TypeDefinitionIndex = 1406;

	class InterfaceTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::InteropServices::ComInterfaceType _val; // 0x10
		::System::Void _ctor(::System::Runtime::InteropServices::ComInterfaceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComInterfaceType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_INTERFACETYPEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
