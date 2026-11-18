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

#define NPEHICADMLO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14F3F4E0)
#define NPEHICADMLO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14F3F2F0)
#define NPEHICADMLO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14F3FB00)
#define NPEHICADMLO_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14F3F430)
#define NPEHICADMLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3F9B0)

inline static constexpr unsigned int NPEHICADMLO_TypeDefinitionIndex = 51566;

class NPEHICADMLO : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHICADMLO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHICADMLO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NPEHICADMLO_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + NPEHICADMLO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHICADMLO_GDEOPIBNOIN_OFFSET))(this);
	}
};
