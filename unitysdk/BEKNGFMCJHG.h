#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define BEKNGFMCJHG_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0xFF6B0B0)
#define BEKNGFMCJHG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFF6B040)
#define BEKNGFMCJHG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFF6AFB0)
#define BEKNGFMCJHG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFF6B4B0)
#define BEKNGFMCJHG__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6B410)

inline static constexpr unsigned int BEKNGFMCJHG_TypeDefinitionIndex = 82267;

class BEKNGFMCJHG : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKNGFMCJHG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKNGFMCJHG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BEKNGFMCJHG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKNGFMCJHG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean BGJPLEHEDKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKNGFMCJHG_BGJPLEHEDKJ_OFFSET))(this);
	}
};
