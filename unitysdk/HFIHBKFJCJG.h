#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HFIHBKFJCJG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17AF3580)
#define HFIHBKFJCJG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17AF3210)
#define HFIHBKFJCJG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17AF3C60)
#define HFIHBKFJCJG_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x17AF34D0)
#define HFIHBKFJCJG__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF3A20)

inline static constexpr unsigned int HFIHBKFJCJG_TypeDefinitionIndex = 69493;

class HFIHBKFJCJG : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::MoleMole::Config::Spline_WayPoint>* EOIABMNKADK; // 0x18
	::CPABOPKIGAL* CDNFNBDEJFK; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* LEINIOPOLOM; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* KKMLCGAAGAL; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* HJFEKJEGFIH; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* FDHDNAKNPBG; // 0x40
	::AAMKEDEDHPD_1<::System::String*>* JCACKMABDMN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIHBKFJCJG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIHBKFJCJG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFIHBKFJCJG_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + HFIHBKFJCJG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIHBKFJCJG_GDEOPIBNOIN_OFFSET))(this);
	}
};
