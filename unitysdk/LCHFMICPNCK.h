#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGLNBEGLIJE.h"

class CAOKACBLMBH;

#define LCHFMICPNCK_IDFLCPHBBDJ_OFFSET UNITYSDK_OFFSET(0x1517FDE0)
#define LCHFMICPNCK_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x1517FC40)
#define LCHFMICPNCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1517FDD0)

inline static constexpr unsigned int LCHFMICPNCK_TypeDefinitionIndex = 77332;

class LCHFMICPNCK : public ::DGLNBEGLIJE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHFMICPNCK__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCHFMICPNCK_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::Boolean IDFLCPHBBDJ(::CAOKACBLMBH* MIALFKCCCPI, ::System::Int32& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCHFMICPNCK_IDFLCPHBBDJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
