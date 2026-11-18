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

#define BPBEOEDHLCA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1509D420)
#define BPBEOEDHLCA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1509D230)
#define BPBEOEDHLCA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1509D7C0)
#define BPBEOEDHLCA_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1509D370)
#define BPBEOEDHLCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1509D670)

inline static constexpr unsigned int BPBEOEDHLCA_TypeDefinitionIndex = 41780;

class BPBEOEDHLCA : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x20
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBEOEDHLCA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBEOEDHLCA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BPBEOEDHLCA_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + BPBEOEDHLCA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBEOEDHLCA_GDEOPIBNOIN_OFFSET))(this);
	}
};
