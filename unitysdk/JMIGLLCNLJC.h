#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Foundation/ViewObject/Structures/FSplineSessionArgs.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JMIGLLCNLJC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x152ADD40)
#define JMIGLLCNLJC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x152AD920)
#define JMIGLLCNLJC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x152AE870)
#define JMIGLLCNLJC_KLLPCOAJMFG_OFFSET UNITYSDK_OFFSET(0x152AE290)
#define JMIGLLCNLJC_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x152ADC90)
#define JMIGLLCNLJC_NBNHNEHCGHF_OFFSET UNITYSDK_OFFSET(0x152AE530)
#define JMIGLLCNLJC__CTOR_OFFSET UNITYSDK_OFFSET(0x152AE5C0)

inline static constexpr unsigned int JMIGLLCNLJC_TypeDefinitionIndex = 44394;

class JMIGLLCNLJC : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* KKMLCGAAGAL; // 0x18
	::KCMIFNGABDC_1<::MoleMole::Config::Spline_WayPoint>* KPHOLOGEDCE; // 0x20
	::AAMKEDEDHPD_1<::System::String*>* KJNPGJJPAKF; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FDHDNAKNPBG; // 0x30
	::KCMIFNGABDC_1<::System::String*>* JCACKMABDMN; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* LEINIOPOLOM; // 0x40
	::CPABOPKIGAL* FEKHAKBANMD; // 0x48
	::AAMKEDEDHPD_1<::System::Int32>* HJFEKJEGFIH; // 0x50
	::AAMKEDEDHPD_1<::MoleMole::Config::Spline_WayPoint>* HPENKBEHLJM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIGLLCNLJC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIGLLCNLJC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JMIGLLCNLJC_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + JMIGLLCNLJC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Boolean KLLPCOAJMFG(::LGCNEDCMPKM& BKBGPKNGNMF, ::Foundation::ViewObject::Structures::FSplineSessionArgs& KOIBHLHLMFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&, ::Foundation::ViewObject::Structures::FSplineSessionArgs&))((::PBYTE)hIl2Cpp + JMIGLLCNLJC_KLLPCOAJMFG_OFFSET))(this, BKBGPKNGNMF, KOIBHLHLMFC);
	}

	::System::Boolean NBNHNEHCGHF(::LGCNEDCMPKM& BKBGPKNGNMF, ::Foundation::ViewObject::Structures::FSplineSessionArgs& KOIBHLHLMFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&, ::Foundation::ViewObject::Structures::FSplineSessionArgs&))((::PBYTE)hIl2Cpp + JMIGLLCNLJC_NBNHNEHCGHF_OFFSET))(this, BKBGPKNGNMF, KOIBHLHLMFC);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIGLLCNLJC_GDEOPIBNOIN_OFFSET))(this);
	}
};
