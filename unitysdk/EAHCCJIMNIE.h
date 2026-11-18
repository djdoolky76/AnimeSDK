#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define EAHCCJIMNIE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x106279B0)
#define EAHCCJIMNIE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x106278D0)
#define EAHCCJIMNIE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10627E30)
#define EAHCCJIMNIE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x10627E40)
#define EAHCCJIMNIE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x10627780)
#define EAHCCJIMNIE__CTOR_OFFSET UNITYSDK_OFFSET(0x10627D40)

inline static constexpr unsigned int EAHCCJIMNIE_TypeDefinitionIndex = 83027;

class EAHCCJIMNIE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCCJIMNIE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + EAHCCJIMNIE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCCJIMNIE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EAHCCJIMNIE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCCJIMNIE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + EAHCCJIMNIE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
