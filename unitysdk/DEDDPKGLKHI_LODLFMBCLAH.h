#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPNKPNDELEN.h"
#include "unitysdk/System/ValueType.h"

#define DEDDPKGLKHI_LODLFMBCLAH_EGEEIGPLDCG_OFFSET UNITYSDK_OFFSET(0x6EEB70)

inline static constexpr unsigned int DEDDPKGLKHI_LODLFMBCLAH_TypeDefinitionIndex = 78342;

struct alignas(4) DEDDPKGLKHI_LODLFMBCLAH
{
	::System::Boolean FMDDBMFHFHK; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 HFPCJJLPEBD; // 0x14
	::System::Int32 LONDMNEMFKN; // 0x18
	::System::Int32 GDBOEMLNPLB; // 0x1C

	::DPNKPNDELEN EGEEIGPLDCG()
	{
		return ((::DPNKPNDELEN(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_LODLFMBCLAH_EGEEIGPLDCG_OFFSET))(this);
	}
};
