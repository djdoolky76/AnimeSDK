#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
template <typename T> class AAMKEDEDHPD_1;

#define JCDLJKKEEBH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A4E7C0)
#define JCDLJKKEEBH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A4E500)
#define JCDLJKKEEBH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A4EB90)
#define JCDLJKKEEBH_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14A4E710)
#define JCDLJKKEEBH__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4E910)

inline static constexpr unsigned int JCDLJKKEEBH_TypeDefinitionIndex = 81339;

class JCDLJKKEEBH : public ::BKCJAIFHNKF
{
public:
	::CPABOPKIGAL* HEJAJBPPPCL; // 0x18
	::CPABOPKIGAL* CCCBGAJHNAN; // 0x20
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* KPGFJCOAJNA; // 0x28
	::CPABOPKIGAL* BNADLNACLFB; // 0x30
	::CPABOPKIGAL* KIIPBPFLKLI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDLJKKEEBH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDLJKKEEBH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JCDLJKKEEBH_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + JCDLJKKEEBH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDLJKKEEBH_GDEOPIBNOIN_OFFSET))(this);
	}
};
