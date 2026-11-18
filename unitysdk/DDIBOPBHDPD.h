#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GFBNEMLLJPF;

#define DDIBOPBHDPD__CTOR_OFFSET UNITYSDK_OFFSET(0x7CA5E0)

inline static constexpr unsigned int DDIBOPBHDPD_TypeDefinitionIndex = 85169;

struct alignas(4) DDIBOPBHDPD
{
	::System::Boolean HHHAOGBDNKF; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 EGCGJNIJLBN; // 0x14
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x18
	::System::Single IBCCEKBIJBH; // 0x24
	::System::UInt32 BFNLGMBNCAD; // 0x28
	::System::UInt32 FPJJKEGPFNG; // 0x2C

	::System::Void _ctor(::GFBNEMLLJPF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::GFBNEMLLJPF*))((::PBYTE)hIl2Cpp + DDIBOPBHDPD__CTOR_OFFSET))(this, DFMKILICPFB);
	}
};
