#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ICLPLOAPBGO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16564430)

inline static constexpr unsigned int ICLPLOAPBGO_TypeDefinitionIndex = 84189;

struct alignas(4) ICLPLOAPBGO
{
	static ::ICLPLOAPBGO* StaticGet_FDJHEBHLJLD()
	{
		return (::ICLPLOAPBGO*)Il2CppClass::FromTypeDefinitionIndex(ICLPLOAPBGO_TypeDefinitionIndex)->GetStaticField(0xF6C0);
	}
	::System::Int32 AJOPAGDLONL; // 0x10
	::System::Int32 PAOJLDBJKGH; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICLPLOAPBGO__CCTOR_OFFSET))();
	}
};
