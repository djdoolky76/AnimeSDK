#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class KBDGKAJPALP;

#define IMENBCALBGM_NFJIDKBNIKP_OFFSET UNITYSDK_OFFSET(0x859A60)

inline static constexpr unsigned int IMENBCALBGM_TypeDefinitionIndex = 94203;

struct alignas(4) IMENBCALBGM
{
	::System::Boolean NFJIDKBNIKP(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + IMENBCALBGM_NFJIDKBNIKP_OFFSET))(this, GEEHGDABNJF);
	}
};
