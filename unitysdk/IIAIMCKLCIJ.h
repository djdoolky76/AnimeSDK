#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define IIAIMCKLCIJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x160AA1C0)
#define IIAIMCKLCIJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x160AA030)
#define IIAIMCKLCIJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x160AA410)
#define IIAIMCKLCIJ_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x160AA110)
#define IIAIMCKLCIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x160AA310)

inline static constexpr unsigned int IIAIMCKLCIJ_TypeDefinitionIndex = 51957;

class IIAIMCKLCIJ : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* HBICKJCMLHB; // 0x18
	::MKBBPOFGLOF* MDBJDMPDGND; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCKLCIJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCKLCIJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IIAIMCKLCIJ_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + IIAIMCKLCIJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCKLCIJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
