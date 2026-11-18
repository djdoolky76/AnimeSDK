#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define CGHGOCCHPDL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14F262B0)
#define CGHGOCCHPDL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14F26220)
#define CGHGOCCHPDL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14F26830)
#define CGHGOCCHPDL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F26790)

inline static constexpr unsigned int CGHGOCCHPDL_TypeDefinitionIndex = 40272;

class CGHGOCCHPDL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* MDOKHAPGNGA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHGOCCHPDL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHGOCCHPDL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CGHGOCCHPDL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHGOCCHPDL_GDEOPIBNOIN_OFFSET))(this);
	}
};
