#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define AOANJGDKDGA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1700C770)
#define AOANJGDKDGA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1700C5E0)
#define AOANJGDKDGA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1700C9E0)
#define AOANJGDKDGA_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1700C6C0)
#define AOANJGDKDGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1700C8E0)

inline static constexpr unsigned int AOANJGDKDGA_TypeDefinitionIndex = 84518;

class AOANJGDKDGA : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* IBNLAAIELGL; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOANJGDKDGA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOANJGDKDGA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AOANJGDKDGA_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + AOANJGDKDGA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOANJGDKDGA_GDEOPIBNOIN_OFFSET))(this);
	}
};
