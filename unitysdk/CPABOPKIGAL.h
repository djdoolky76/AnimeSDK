#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPODODIOMHF.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define CPABOPKIGAL_DDNEMMFLNBM_OFFSET UNITYSDK_OFFSET(0x147B5FC0)
#define CPABOPKIGAL_ECOEGDPJNNG_OFFSET UNITYSDK_OFFSET(0x147B5FA0)
#define CPABOPKIGAL_ELMCHFJBHHJ_OFFSET UNITYSDK_OFFSET(0x14799DE0)
#define CPABOPKIGAL_NFAABGJADGG_OFFSET UNITYSDK_OFFSET(0x1477CF80)
#define CPABOPKIGAL__CTOR_OFFSET UNITYSDK_OFFSET(0x147B5FB0)

inline static constexpr unsigned int CPABOPKIGAL_TypeDefinitionIndex = 77233;

class CPABOPKIGAL : public ::MPODODIOMHF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPABOPKIGAL__CTOR_OFFSET))(this);
	}

	::System::Boolean ECOEGDPJNNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPABOPKIGAL_ECOEGDPJNNG_OFFSET))(this);
	}

	static ::CPABOPKIGAL* ELMCHFJBHHJ()
	{
		return ((::CPABOPKIGAL*(*)())((::PBYTE)hIl2Cpp + CPABOPKIGAL_ELMCHFJBHHJ_OFFSET))();
	}

	::System::Boolean DDNEMMFLNBM(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPABOPKIGAL_DDNEMMFLNBM_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void NFAABGJADGG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPABOPKIGAL_NFAABGJADGG_OFFSET))(this, BKBGPKNGNMF);
	}
};
