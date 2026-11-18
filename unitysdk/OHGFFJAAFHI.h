#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define OHGFFJAAFHI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A61BE0)
#define OHGFFJAAFHI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A61B50)
#define OHGFFJAAFHI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A61E50)
#define OHGFFJAAFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A61DB0)

inline static constexpr unsigned int OHGFFJAAFHI_TypeDefinitionIndex = 53110;

class OHGFFJAAFHI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGFFJAAFHI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGFFJAAFHI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OHGFFJAAFHI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGFFJAAFHI_GDEOPIBNOIN_OFFSET))(this);
	}
};
