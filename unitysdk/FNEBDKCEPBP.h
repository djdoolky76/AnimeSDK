#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
template <typename T> class AAMKEDEDHPD_1;

#define FNEBDKCEPBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x179B7200)
#define FNEBDKCEPBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x179B7010)
#define FNEBDKCEPBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x179B7460)
#define FNEBDKCEPBP_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x179B7150)
#define FNEBDKCEPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x179B7310)

inline static constexpr unsigned int FNEBDKCEPBP_TypeDefinitionIndex = 88709;

class FNEBDKCEPBP : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* ONKCBNCGAOF; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* PBNBPGAKMBB; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEBDKCEPBP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEBDKCEPBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNEBDKCEPBP_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + FNEBDKCEPBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEBDKCEPBP_GDEOPIBNOIN_OFFSET))(this);
	}
};
