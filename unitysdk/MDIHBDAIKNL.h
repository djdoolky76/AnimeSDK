#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define MDIHBDAIKNL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A637B10)
#define MDIHBDAIKNL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A637920)
#define MDIHBDAIKNL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A637DA0)
#define MDIHBDAIKNL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1A637A60)
#define MDIHBDAIKNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A637C50)

inline static constexpr unsigned int MDIHBDAIKNL_TypeDefinitionIndex = 88332;

class MDIHBDAIKNL : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* KPBEHONFCPJ; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* GLBHDPPOAAC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIHBDAIKNL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIHBDAIKNL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDIHBDAIKNL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + MDIHBDAIKNL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIHBDAIKNL_GDEOPIBNOIN_OFFSET))(this);
	}
};
