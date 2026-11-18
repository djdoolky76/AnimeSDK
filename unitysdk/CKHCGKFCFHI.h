#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CKHCGKFCFHI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18DDBB00)
#define CKHCGKFCFHI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18DDB8A0)
#define CKHCGKFCFHI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18DDBEC0)
#define CKHCGKFCFHI_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x18DDBA50)
#define CKHCGKFCFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDBD40)

inline static constexpr unsigned int CKHCGKFCFHI_TypeDefinitionIndex = 82121;

class CKHCGKFCFHI : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* HANHEBHHGMA; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* AEINJPPMIOF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHCGKFCFHI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHCGKFCFHI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CKHCGKFCFHI_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + CKHCGKFCFHI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHCGKFCFHI_GDEOPIBNOIN_OFFSET))(this);
	}
};
