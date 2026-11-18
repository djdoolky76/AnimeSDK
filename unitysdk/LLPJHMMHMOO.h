#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LLPJHMMHMOO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x151A39A0)
#define LLPJHMMHMOO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x151A3860)
#define LLPJHMMHMOO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151A3C50)
#define LLPJHMMHMOO__CTOR_OFFSET UNITYSDK_OFFSET(0x151A3B30)

inline static constexpr unsigned int LLPJHMMHMOO_TypeDefinitionIndex = 75999;

class LLPJHMMHMOO : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int64>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Int64>* ICGBACLFMIL; // 0x20
	::KCMIFNGABDC_1<::System::Int64>* MEINJKFJIGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPJHMMHMOO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPJHMMHMOO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LLPJHMMHMOO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPJHMMHMOO_GDEOPIBNOIN_OFFSET))(this);
	}
};
