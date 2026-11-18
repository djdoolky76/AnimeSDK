#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NABFCBMJGLA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1726A1C0)
#define NABFCBMJGLA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1726A010)
#define NABFCBMJGLA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1726A5C0)
#define NABFCBMJGLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1726A460)

inline static constexpr unsigned int NABFCBMJGLA_TypeDefinitionIndex = 68441;

class NABFCBMJGLA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* KFLKNNAKCFO; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* ANDAJEEDAJD; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x38
	::KCMIFNGABDC_1<::System::Single>* HHGILNNMNAK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABFCBMJGLA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABFCBMJGLA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NABFCBMJGLA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABFCBMJGLA_GDEOPIBNOIN_OFFSET))(this);
	}
};
