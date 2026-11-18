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

#define NFAOMFPEDBN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE1910C0)
#define NFAOMFPEDBN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE190ED0)
#define NFAOMFPEDBN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE191410)
#define NFAOMFPEDBN_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0xE191010)
#define NFAOMFPEDBN__CTOR_OFFSET UNITYSDK_OFFSET(0xE1912C0)

inline static constexpr unsigned int NFAOMFPEDBN_TypeDefinitionIndex = 69404;

class NFAOMFPEDBN : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAOMFPEDBN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAOMFPEDBN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NFAOMFPEDBN_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + NFAOMFPEDBN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAOMFPEDBN_GDEOPIBNOIN_OFFSET))(this);
	}
};
