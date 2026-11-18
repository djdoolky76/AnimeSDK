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

#define FINFHJJHIHN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10EBA680)
#define FINFHJJHIHN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10EBA490)
#define FINFHJJHIHN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10EBAA20)
#define FINFHJJHIHN_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x10EBA5D0)
#define FINFHJJHIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBA8D0)

inline static constexpr unsigned int FINFHJJHIHN_TypeDefinitionIndex = 48593;

class FINFHJJHIHN : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x20
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINFHJJHIHN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINFHJJHIHN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FINFHJJHIHN_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + FINFHJJHIHN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINFHJJHIHN_GDEOPIBNOIN_OFFSET))(this);
	}
};
