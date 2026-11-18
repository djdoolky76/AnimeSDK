#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define AHGKCEEDFKM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x154F92E0)
#define AHGKCEEDFKM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x154F9190)
#define AHGKCEEDFKM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x154F9820)
#define AHGKCEEDFKM_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x154F9790)
#define AHGKCEEDFKM_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x154F8FB0)
#define AHGKCEEDFKM__CTOR_OFFSET UNITYSDK_OFFSET(0x154F9660)

inline static constexpr unsigned int AHGKCEEDFKM_TypeDefinitionIndex = 47914;

class AHGKCEEDFKM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* MBIIOLNEBNH; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x30
	::KCMIFNGABDC_1<::System::Single>* FICPCAOLLDH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGKCEEDFKM__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + AHGKCEEDFKM_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGKCEEDFKM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AHGKCEEDFKM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + AHGKCEEDFKM_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGKCEEDFKM_GDEOPIBNOIN_OFFSET))(this);
	}
};
