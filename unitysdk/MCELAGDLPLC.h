#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MCELAGDLPLC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D157C0)
#define MCELAGDLPLC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D156F0)
#define MCELAGDLPLC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D15900)
#define MCELAGDLPLC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D15810)

inline static constexpr unsigned int MCELAGDLPLC_TypeDefinitionIndex = 68888;

class MCELAGDLPLC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* HHGILNNMNAK; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* JDAMBOFNBFM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCELAGDLPLC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCELAGDLPLC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MCELAGDLPLC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCELAGDLPLC_GDEOPIBNOIN_OFFSET))(this);
	}
};
