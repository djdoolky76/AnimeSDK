#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define OANNIOEJIIK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13664C50)
#define OANNIOEJIIK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13664B70)
#define OANNIOEJIIK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13664F30)
#define OANNIOEJIIK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x13664EA0)
#define OANNIOEJIIK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x13664A20)
#define OANNIOEJIIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13664DB0)

inline static constexpr unsigned int OANNIOEJIIK_TypeDefinitionIndex = 40559;

class OANNIOEJIIK : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* LKOLDCJCOCA; // 0x0
	::KCMIFNGABDC_1<::System::Boolean>* JPJHAJKJOHN; // 0x28
	::KCMIFNGABDC_1<::System::Single>* MOGOPONPALL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNIOEJIIK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OANNIOEJIIK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNIOEJIIK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OANNIOEJIIK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OANNIOEJIIK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANNIOEJIIK_GDEOPIBNOIN_OFFSET))(this);
	}
};
