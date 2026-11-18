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

#define HEOPNKCGHED_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D23910)
#define HEOPNKCGHED_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14D235A0)
#define HEOPNKCGHED_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D23FF0)
#define HEOPNKCGHED_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14D23860)
#define HEOPNKCGHED__CTOR_OFFSET UNITYSDK_OFFSET(0x14D23DB0)

inline static constexpr unsigned int HEOPNKCGHED_TypeDefinitionIndex = 50631;

class HEOPNKCGHED : public ::BKCJAIFHNKF
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FDHDNAKNPBG; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* HJFEKJEGFIH; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* LEINIOPOLOM; // 0x28
	::AAMKEDEDHPD_1<::MoleMole::Config::Spline_WayPoint>* LECGKFODOKC; // 0x30
	::AAMKEDEDHPD_1<::System::String*>* JCACKMABDMN; // 0x38
	::CPABOPKIGAL* EGBNGNPFONO; // 0x40
	::AAMKEDEDHPD_1<::System::Int32>* KKMLCGAAGAL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOPNKCGHED__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOPNKCGHED_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HEOPNKCGHED_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + HEOPNKCGHED_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOPNKCGHED_GDEOPIBNOIN_OFFSET))(this);
	}
};
