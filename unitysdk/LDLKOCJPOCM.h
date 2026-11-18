#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define LDLKOCJPOCM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1773E660)
#define LDLKOCJPOCM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1773E580)
#define LDLKOCJPOCM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1773EB10)
#define LDLKOCJPOCM_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1773EB20)
#define LDLKOCJPOCM_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1773E430)
#define LDLKOCJPOCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1773EA20)

inline static constexpr unsigned int LDLKOCJPOCM_TypeDefinitionIndex = 81265;

class LDLKOCJPOCM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* CNFGPELOPNM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKOCJPOCM__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LDLKOCJPOCM_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKOCJPOCM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LDLKOCJPOCM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKOCJPOCM_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LDLKOCJPOCM_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
