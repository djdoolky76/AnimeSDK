#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LAPIFBGFPLG_FNDILMHCINB_OFFSET UNITYSDK_OFFSET(0x359320)
#define LAPIFBGFPLG_IBHIDHILFMD_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define LAPIFBGFPLG__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int LAPIFBGFPLG_TypeDefinitionIndex = 95277;

struct alignas(4) LAPIFBGFPLG
{
	::System::Int32 _HBLBDCEHIPC_k__BackingField; // 0x10
	::System::Int32 _EHDGEPFCDPC_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 GIOEGNDICIC, ::System::Int32 MKALFHABMMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LAPIFBGFPLG__CTOR_OFFSET))(this, GIOEGNDICIC, MKALFHABMMD);
	}

	::System::Int32 IBHIDHILFMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPIFBGFPLG_IBHIDHILFMD_OFFSET))(this);
	}

	::System::Int32 FNDILMHCINB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPIFBGFPLG_FNDILMHCINB_OFFSET))(this);
	}
};
