#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define MJFLBDLJFHE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x177C1070)
#define MJFLBDLJFHE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x177C0F90)
#define MJFLBDLJFHE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x177C1570)
#define MJFLBDLJFHE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x177C1580)
#define MJFLBDLJFHE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x177C0E40)
#define MJFLBDLJFHE__CTOR_OFFSET UNITYSDK_OFFSET(0x177C1480)

inline static constexpr unsigned int MJFLBDLJFHE_TypeDefinitionIndex = 45827;

class MJFLBDLJFHE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* HHMLLBAEDJF; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFLBDLJFHE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MJFLBDLJFHE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFLBDLJFHE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MJFLBDLJFHE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFLBDLJFHE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MJFLBDLJFHE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
