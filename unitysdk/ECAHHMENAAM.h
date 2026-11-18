#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
template <typename T> class AAMKEDEDHPD_1;

#define ECAHHMENAAM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDD2BC0)
#define ECAHHMENAAM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDD2900)
#define ECAHHMENAAM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDD2F90)
#define ECAHHMENAAM_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0xFDD2B10)
#define ECAHHMENAAM__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD2D10)

inline static constexpr unsigned int ECAHHMENAAM_TypeDefinitionIndex = 48118;

class ECAHHMENAAM : public ::BKCJAIFHNKF
{
public:
	::CPABOPKIGAL* CCCBGAJHNAN; // 0x18
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* KPGFJCOAJNA; // 0x20
	::CPABOPKIGAL* HEJAJBPPPCL; // 0x28
	::CPABOPKIGAL* KIIPBPFLKLI; // 0x30
	::CPABOPKIGAL* BNADLNACLFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAHHMENAAM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAHHMENAAM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ECAHHMENAAM_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + ECAHHMENAAM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAHHMENAAM_GDEOPIBNOIN_OFFSET))(this);
	}
};
