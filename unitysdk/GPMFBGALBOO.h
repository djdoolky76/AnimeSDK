#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define GPMFBGALBOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x722370)
#define GPMFBGALBOO__CTOR_OFFSET UNITYSDK_OFFSET(0x722360)

inline static constexpr unsigned int GPMFBGALBOO_TypeDefinitionIndex = 54908;

struct alignas(4) GPMFBGALBOO
{
	static ::System::Boolean* StaticGet_DCIMOMHMBAM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GPMFBGALBOO_TypeDefinitionIndex)->GetStaticField(0x136E0);
	}

	::System::Void _ctor(::System::Boolean HKIEEPHNKJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPMFBGALBOO__CTOR_OFFSET))(this, HKIEEPHNKJM);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFBGALBOO_DISPOSE_OFFSET))(this);
	}
};
