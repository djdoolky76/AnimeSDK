#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DILALLBAEEE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12412CA0)
#define DILALLBAEEE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12412B80)
#define DILALLBAEEE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12412E00)
#define DILALLBAEEE_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x12412C50)
#define DILALLBAEEE__CTOR_OFFSET UNITYSDK_OFFSET(0x12412D00)

inline static constexpr unsigned int DILALLBAEEE_TypeDefinitionIndex = 57244;

class DILALLBAEEE : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILALLBAEEE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILALLBAEEE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DILALLBAEEE_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + DILALLBAEEE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILALLBAEEE_GDEOPIBNOIN_OFFSET))(this);
	}
};
