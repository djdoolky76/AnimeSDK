#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define IBCBGJOFEOI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12E9DB40)
#define IBCBGJOFEOI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12E9D990)
#define IBCBGJOFEOI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12E9E260)
#define IBCBGJOFEOI_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x12E9E270)
#define IBCBGJOFEOI_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x12E9D840)
#define IBCBGJOFEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E090)

inline static constexpr unsigned int IBCBGJOFEOI_TypeDefinitionIndex = 68431;

class IBCBGJOFEOI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x28
	::CPABOPKIGAL* PKKLIFFIMMB; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x38
	::CPABOPKIGAL* BOHNBOELHDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCBGJOFEOI__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
