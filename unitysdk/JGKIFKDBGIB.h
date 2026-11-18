#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JGKIFKDBGIB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18737F70)
#define JGKIFKDBGIB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18737D80)
#define JGKIFKDBGIB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x187382C0)
#define JGKIFKDBGIB_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x18737EC0)
#define JGKIFKDBGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x18738170)

inline static constexpr unsigned int JGKIFKDBGIB_TypeDefinitionIndex = 45094;

class JGKIFKDBGIB : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKIFKDBGIB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKIFKDBGIB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JGKIFKDBGIB_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + JGKIFKDBGIB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKIFKDBGIB_GDEOPIBNOIN_OFFSET))(this);
	}
};
