#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DJAOMKNENGB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16BA2130)
#define DJAOMKNENGB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16BA1FB0)
#define DJAOMKNENGB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16BA2450)
#define DJAOMKNENGB_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x16BA2080)
#define DJAOMKNENGB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA2350)

inline static constexpr unsigned int DJAOMKNENGB_TypeDefinitionIndex = 64255;

class DJAOMKNENGB : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* FEMHHGAMLGL; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAOMKNENGB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAOMKNENGB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DJAOMKNENGB_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + DJAOMKNENGB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAOMKNENGB_GDEOPIBNOIN_OFFSET))(this);
	}
};
