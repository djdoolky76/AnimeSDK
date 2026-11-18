#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GPHMPHANHEL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15D906C0)
#define GPHMPHANHEL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15D905A0)
#define GPHMPHANHEL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15D90810)
#define GPHMPHANHEL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15D90670)
#define GPHMPHANHEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15D90720)

inline static constexpr unsigned int GPHMPHANHEL_TypeDefinitionIndex = 63714;

class GPHMPHANHEL : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* HKBJOEMHBHC; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* BOHBDHAPLDN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMPHANHEL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMPHANHEL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GPHMPHANHEL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + GPHMPHANHEL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMPHANHEL_GDEOPIBNOIN_OFFSET))(this);
	}
};
