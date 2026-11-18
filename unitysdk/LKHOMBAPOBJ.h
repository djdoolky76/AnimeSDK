#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define LKHOMBAPOBJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16C5F920)
#define LKHOMBAPOBJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C5F7A0)
#define LKHOMBAPOBJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C5FB70)
#define LKHOMBAPOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F980)

inline static constexpr unsigned int LKHOMBAPOBJ_TypeDefinitionIndex = 40369;

class LKHOMBAPOBJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* AMIBGNJFNDA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHOMBAPOBJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHOMBAPOBJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LKHOMBAPOBJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHOMBAPOBJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
