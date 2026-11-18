#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define GODHHBKLPIH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A295C0)
#define GODHHBKLPIH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A29430)
#define GODHHBKLPIH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A29830)
#define GODHHBKLPIH_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x17A29510)
#define GODHHBKLPIH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A29730)

inline static constexpr unsigned int GODHHBKLPIH_TypeDefinitionIndex = 64594;

class GODHHBKLPIH : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* EEDKICLEKKL; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODHHBKLPIH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODHHBKLPIH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GODHHBKLPIH_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + GODHHBKLPIH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODHHBKLPIH_GDEOPIBNOIN_OFFSET))(this);
	}
};
