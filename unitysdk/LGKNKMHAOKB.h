#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LGKNKMHAOKB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DAB5B0)
#define LGKNKMHAOKB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DAB430)
#define LGKNKMHAOKB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DAB8C0)
#define LGKNKMHAOKB_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14DAB500)
#define LGKNKMHAOKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAB7C0)

inline static constexpr unsigned int LGKNKMHAOKB_TypeDefinitionIndex = 45450;

class LGKNKMHAOKB : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKNKMHAOKB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKNKMHAOKB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LGKNKMHAOKB_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + LGKNKMHAOKB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKNKMHAOKB_GDEOPIBNOIN_OFFSET))(this);
	}
};
