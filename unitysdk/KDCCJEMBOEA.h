#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
template <typename T> class AAMKEDEDHPD_1;

#define KDCCJEMBOEA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14FCF510)
#define KDCCJEMBOEA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14FCF380)
#define KDCCJEMBOEA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14FCF6F0)
#define KDCCJEMBOEA_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14FCF460)
#define KDCCJEMBOEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCF5F0)

inline static constexpr unsigned int KDCCJEMBOEA_TypeDefinitionIndex = 41215;

class KDCCJEMBOEA : public ::BKCJAIFHNKF
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* NMEJEACBGBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJEMBOEA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJEMBOEA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KDCCJEMBOEA_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + KDCCJEMBOEA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJEMBOEA_GDEOPIBNOIN_OFFSET))(this);
	}
};
