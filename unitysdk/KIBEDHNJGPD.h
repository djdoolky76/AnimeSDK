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

#define KIBEDHNJGPD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1765B650)
#define KIBEDHNJGPD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1765B460)
#define KIBEDHNJGPD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1765BCB0)
#define KIBEDHNJGPD_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1765B5A0)
#define KIBEDHNJGPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1765BB60)

inline static constexpr unsigned int KIBEDHNJGPD_TypeDefinitionIndex = 44144;

class KIBEDHNJGPD : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x20
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBEDHNJGPD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBEDHNJGPD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KIBEDHNJGPD_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + KIBEDHNJGPD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBEDHNJGPD_GDEOPIBNOIN_OFFSET))(this);
	}
};
