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

#define AKJNLNGAIFN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16FF7020)
#define AKJNLNGAIFN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16FF6E30)
#define AKJNLNGAIFN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16FF7400)
#define AKJNLNGAIFN_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x16FF6F70)
#define AKJNLNGAIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF72B0)

inline static constexpr unsigned int AKJNLNGAIFN_TypeDefinitionIndex = 79533;

class AKJNLNGAIFN : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* OGJMHDPLPLM; // 0x20
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJNLNGAIFN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJNLNGAIFN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AKJNLNGAIFN_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + AKJNLNGAIFN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJNLNGAIFN_GDEOPIBNOIN_OFFSET))(this);
	}
};
