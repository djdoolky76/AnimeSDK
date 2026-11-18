#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define KDJNKOEIKNC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15155FB0)
#define KDJNKOEIKNC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15155E20)
#define KDJNKOEIKNC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151561F0)
#define KDJNKOEIKNC_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15155F00)
#define KDJNKOEIKNC__CTOR_OFFSET UNITYSDK_OFFSET(0x151560F0)

inline static constexpr unsigned int KDJNKOEIKNC_TypeDefinitionIndex = 55474;

class KDJNKOEIKNC : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* AMDPEEPELAP; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNKOEIKNC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNKOEIKNC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KDJNKOEIKNC_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + KDJNKOEIKNC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNKOEIKNC_GDEOPIBNOIN_OFFSET))(this);
	}
};
