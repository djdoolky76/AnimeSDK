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

#define BOHLIBFDLII_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13986EC0)
#define BOHLIBFDLII_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13986C60)
#define BOHLIBFDLII_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13987280)
#define BOHLIBFDLII_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x13986E10)
#define BOHLIBFDLII__CTOR_OFFSET UNITYSDK_OFFSET(0x13987100)

inline static constexpr unsigned int BOHLIBFDLII_TypeDefinitionIndex = 59131;

class BOHLIBFDLII : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::String*>* HANHEBHHGMA; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GEDPOFKPKHL; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* AEINJPPMIOF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHLIBFDLII__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHLIBFDLII_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BOHLIBFDLII_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + BOHLIBFDLII_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHLIBFDLII_GDEOPIBNOIN_OFFSET))(this);
	}
};
