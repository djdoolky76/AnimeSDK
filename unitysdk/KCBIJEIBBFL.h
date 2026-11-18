#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KCBIJEIBBFL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18609530)
#define KCBIJEIBBFL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18609450)
#define KCBIJEIBBFL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x186098E0)
#define KCBIJEIBBFL__CTOR_OFFSET UNITYSDK_OFFSET(0x186097F0)

inline static constexpr unsigned int KCBIJEIBBFL_TypeDefinitionIndex = 67506;

class KCBIJEIBBFL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* EHDPKGDPMIG; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBIJEIBBFL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBIJEIBBFL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KCBIJEIBBFL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBIJEIBBFL_GDEOPIBNOIN_OFFSET))(this);
	}
};
