#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define DKHAIBAAFMG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDC2F60)
#define DKHAIBAAFMG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDC2E10)
#define DKHAIBAAFMG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDC3690)
#define DKHAIBAAFMG__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC3500)

inline static constexpr unsigned int DKHAIBAAFMG_TypeDefinitionIndex = 38898;

class DKHAIBAAFMG : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30
	::MKBBPOFGLOF* DGLPCINAMAC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAIBAAFMG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAIBAAFMG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DKHAIBAAFMG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAIBAAFMG_GDEOPIBNOIN_OFFSET))(this);
	}
};
