#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CPLONDCKAJF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x147B9130)
#define CPLONDCKAJF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x147B8F40)
#define CPLONDCKAJF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x147B9790)
#define CPLONDCKAJF_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x147B9080)
#define CPLONDCKAJF__CTOR_OFFSET UNITYSDK_OFFSET(0x147B9640)

inline static constexpr unsigned int CPLONDCKAJF_TypeDefinitionIndex = 74939;

class CPLONDCKAJF : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLONDCKAJF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLONDCKAJF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPLONDCKAJF_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + CPLONDCKAJF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLONDCKAJF_GDEOPIBNOIN_OFFSET))(this);
	}
};
