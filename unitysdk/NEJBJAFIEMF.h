#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NEJBJAFIEMF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1288DDD0)
#define NEJBJAFIEMF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1288DC50)
#define NEJBJAFIEMF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1288E0F0)
#define NEJBJAFIEMF_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1288DD20)
#define NEJBJAFIEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1288DFF0)

inline static constexpr unsigned int NEJBJAFIEMF_TypeDefinitionIndex = 41877;

class NEJBJAFIEMF : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* LNNEONPDEMF; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJBJAFIEMF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJBJAFIEMF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NEJBJAFIEMF_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + NEJBJAFIEMF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJBJAFIEMF_GDEOPIBNOIN_OFFSET))(this);
	}
};
