#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HLPDFDNDBLG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B6B210)
#define HLPDFDNDBLG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B6AF60)
#define HLPDFDNDBLG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B6B500)
#define HLPDFDNDBLG_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15B6B160)
#define HLPDFDNDBLG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6B340)

inline static constexpr unsigned int HLPDFDNDBLG_TypeDefinitionIndex = 57262;

class HLPDFDNDBLG : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* DDJALHHCEPD; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* FHDBMFHDIEI; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* PALBKFLGMOA; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* POEJNGOMCCB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPDFDNDBLG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPDFDNDBLG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HLPDFDNDBLG_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + HLPDFDNDBLG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPDFDNDBLG_GDEOPIBNOIN_OFFSET))(this);
	}
};
