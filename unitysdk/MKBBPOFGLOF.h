#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPODODIOMHF.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define MKBBPOFGLOF_DDNEMMFLNBM_OFFSET UNITYSDK_OFFSET(0x14065C70)
#define MKBBPOFGLOF_ECOEGDPJNNG_OFFSET UNITYSDK_OFFSET(0x14065BF0)
#define MKBBPOFGLOF_HMKKKDJMLBA_OFFSET UNITYSDK_OFFSET(0x14065C10)
#define MKBBPOFGLOF_JIKDGKJFOFE_OFFSET UNITYSDK_OFFSET(0x14065D30)
#define MKBBPOFGLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x14065C00)

inline static constexpr unsigned int MKBBPOFGLOF_TypeDefinitionIndex = 81914;

class MKBBPOFGLOF : public ::MPODODIOMHF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBPOFGLOF__CTOR_OFFSET))(this);
	}

	::System::Boolean ECOEGDPJNNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBPOFGLOF_ECOEGDPJNNG_OFFSET))(this);
	}

	::System::Void HMKKKDJMLBA(::LGCNEDCMPKM& ANNMEBLCLNG)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MKBBPOFGLOF_HMKKKDJMLBA_OFFSET))(this, ANNMEBLCLNG);
	}

	::System::Boolean DDNEMMFLNBM(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MKBBPOFGLOF_DDNEMMFLNBM_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::MKBBPOFGLOF* JIKDGKJFOFE()
	{
		return ((::MKBBPOFGLOF*(*)())((::PBYTE)hIl2Cpp + MKBBPOFGLOF_JIKDGKJFOFE_OFFSET))();
	}
};
