#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NMFKNIOMGGI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE592630)
#define NMFKNIOMGGI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE5923E0)
#define NMFKNIOMGGI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE592920)
#define NMFKNIOMGGI_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0xE592520)
#define NMFKNIOMGGI__CTOR_OFFSET UNITYSDK_OFFSET(0xE5927D0)

inline static constexpr unsigned int NMFKNIOMGGI_TypeDefinitionIndex = 76271;

class NMFKNIOMGGI : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* FFNKANLEJDB; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* JPJHAJKJOHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFKNIOMGGI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFKNIOMGGI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NMFKNIOMGGI_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + NMFKNIOMGGI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFKNIOMGGI_GDEOPIBNOIN_OFFSET))(this);
	}
};
