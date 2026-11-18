#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DKKDFIHLBDO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19D6E3C0)
#define DKKDFIHLBDO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19D6E1B0)
#define DKKDFIHLBDO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19D6E5C0)
#define DKKDFIHLBDO_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x19D6E5D0)
#define DKKDFIHLBDO_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x19D6DF30)
#define DKKDFIHLBDO__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6E420)

inline static constexpr unsigned int DKKDFIHLBDO_TypeDefinitionIndex = 62620;

class DKKDFIHLBDO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* COHPDDBIDCO; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30
	::KCMIFNGABDC_1<::System::Single>* LIAAKPFOEAA; // 0x38
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKDFIHLBDO__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + DKKDFIHLBDO_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKDFIHLBDO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DKKDFIHLBDO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKDFIHLBDO_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + DKKDFIHLBDO_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
