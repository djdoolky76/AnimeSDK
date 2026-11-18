#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define OJPJBPHKEGC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FE4C70)
#define OJPJBPHKEGC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FE4AE0)
#define OJPJBPHKEGC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FE4F50)
#define OJPJBPHKEGC_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15FE4BC0)
#define OJPJBPHKEGC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE4E50)

inline static constexpr unsigned int OJPJBPHKEGC_TypeDefinitionIndex = 76336;

class OJPJBPHKEGC : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* CMDBFAEHLON; // 0x18
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPJBPHKEGC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPJBPHKEGC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OJPJBPHKEGC_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + OJPJBPHKEGC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPJBPHKEGC_GDEOPIBNOIN_OFFSET))(this);
	}
};
