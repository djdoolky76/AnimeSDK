#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KFHDPNNJGFE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1994DDD0)
#define KFHDPNNJGFE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1994DD60)
#define KFHDPNNJGFE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1994DCD0)
#define KFHDPNNJGFE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1994E130)
#define KFHDPNNJGFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1994E080)

inline static constexpr unsigned int KFHDPNNJGFE_TypeDefinitionIndex = 50808;

class KFHDPNNJGFE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FOCLEIBBACL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHDPNNJGFE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHDPNNJGFE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KFHDPNNJGFE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KFHDPNNJGFE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHDPNNJGFE_GDEOPIBNOIN_OFFSET))(this);
	}
};
