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

#define FOHBPJANJAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1750E570)
#define FOHBPJANJAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1750E380)
#define FOHBPJANJAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1750E8C0)
#define FOHBPJANJAJ_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x1750E4C0)
#define FOHBPJANJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1750E770)

inline static constexpr unsigned int FOHBPJANJAJ_TypeDefinitionIndex = 58375;

class FOHBPJANJAJ : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBPJANJAJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBPJANJAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FOHBPJANJAJ_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + FOHBPJANJAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBPJANJAJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
