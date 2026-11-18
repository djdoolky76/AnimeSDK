#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class KBDGKAJPALP;

#define ALEFPMGAIPF_NFJIDKBNIKP_OFFSET UNITYSDK_OFFSET(0x8F86F0)
#define ALEFPMGAIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int ALEFPMGAIPF_TypeDefinitionIndex = 94071;

struct alignas(4) ALEFPMGAIPF
{
	::System::Int32 PMLBNNFACHE; // 0x10

	::System::Void _ctor(::System::Int32 OMEOOLMFEHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALEFPMGAIPF__CTOR_OFFSET))(this, OMEOOLMFEHH);
	}

	::System::Boolean NFJIDKBNIKP(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + ALEFPMGAIPF_NFJIDKBNIKP_OFFSET))(this, GEEHGDABNJF);
	}
};
