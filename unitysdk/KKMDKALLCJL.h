#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KKMDKALLCJL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x129A1E80)
#define KKMDKALLCJL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x129A1DA0)
#define KKMDKALLCJL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x129A1FD0)
#define KKMDKALLCJL__CTOR_OFFSET UNITYSDK_OFFSET(0x129A1EE0)

inline static constexpr unsigned int KKMDKALLCJL_TypeDefinitionIndex = 67177;

class KKMDKALLCJL : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* AMIBGNJFNDA; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JMEKAJLOCGK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMDKALLCJL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMDKALLCJL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KKMDKALLCJL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMDKALLCJL_GDEOPIBNOIN_OFFSET))(this);
	}
};
