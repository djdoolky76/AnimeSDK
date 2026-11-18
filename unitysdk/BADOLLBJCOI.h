#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BADOLLBJCOI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1360A220)
#define BADOLLBJCOI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1360A0A0)
#define BADOLLBJCOI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1360A550)
#define BADOLLBJCOI_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1360A170)
#define BADOLLBJCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1360A450)

inline static constexpr unsigned int BADOLLBJCOI_TypeDefinitionIndex = 48000;

class BADOLLBJCOI : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOLLBJCOI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOLLBJCOI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BADOLLBJCOI_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + BADOLLBJCOI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOLLBJCOI_GDEOPIBNOIN_OFFSET))(this);
	}
};
