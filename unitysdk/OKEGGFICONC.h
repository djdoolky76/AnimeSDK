#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OKEGGFICONC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x172D13A0)
#define OKEGGFICONC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x172D1220)
#define OKEGGFICONC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x172D1930)
#define OKEGGFICONC_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x172D12F0)
#define OKEGGFICONC__CTOR_OFFSET UNITYSDK_OFFSET(0x172D1830)

inline static constexpr unsigned int OKEGGFICONC_TypeDefinitionIndex = 78517;

class OKEGGFICONC : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x18
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEGGFICONC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEGGFICONC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OKEGGFICONC_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + OKEGGFICONC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEGGFICONC_GDEOPIBNOIN_OFFSET))(this);
	}
};
