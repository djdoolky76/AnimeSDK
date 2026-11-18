#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define EDIHGOCIGFM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10630170)
#define EDIHGOCIGFM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x106300E0)
#define EDIHGOCIGFM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10630550)
#define EDIHGOCIGFM__CTOR_OFFSET UNITYSDK_OFFSET(0x106304B0)

inline static constexpr unsigned int EDIHGOCIGFM_TypeDefinitionIndex = 61013;

class EDIHGOCIGFM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* LFDAOEGMNNB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIHGOCIGFM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIHGOCIGFM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EDIHGOCIGFM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIHGOCIGFM_GDEOPIBNOIN_OFFSET))(this);
	}
};
