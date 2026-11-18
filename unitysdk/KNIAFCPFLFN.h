#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AEDDHAGDPNM;
namespace System { class String; }

#define KNIAFCPFLFN__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int KNIAFCPFLFN_TypeDefinitionIndex = 44537;

struct alignas(8) KNIAFCPFLFN
{
	::System::String* MGEDBKBHJPM; // 0x10
	::AEDDHAGDPNM* FPOLLJNHGFM; // 0x18

	::System::Void _ctor(::System::String* HIAIKHDFCLN, ::AEDDHAGDPNM* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AEDDHAGDPNM*))((::PBYTE)hIl2Cpp + KNIAFCPFLFN__CTOR_OFFSET))(this, HIAIKHDFCLN, NFFNEFLKPDG);
	}
};
