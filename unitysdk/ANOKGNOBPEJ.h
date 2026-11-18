#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define ANOKGNOBPEJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11BCAD50)
#define ANOKGNOBPEJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11BCABA0)
#define ANOKGNOBPEJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11BCB470)
#define ANOKGNOBPEJ_KCBLEDBLEJJ_OFFSET UNITYSDK_OFFSET(0x11BCADC0)
#define ANOKGNOBPEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCB2A0)

inline static constexpr unsigned int ANOKGNOBPEJ_TypeDefinitionIndex = 60720;

class ANOKGNOBPEJ : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* DEBCEEGEPGH; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* BDIIOFIJNMN; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x38
	::MKBBPOFGLOF* KEEPIMHHPBH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void KCBLEDBLEJJ(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ_KCBLEDBLEJJ_OFFSET))(this, BKBGPKNGNMF);
	}
};
