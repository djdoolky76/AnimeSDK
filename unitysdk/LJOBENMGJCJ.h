#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LJOBENMGJCJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15196BF0)
#define LJOBENMGJCJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15196AB0)
#define LJOBENMGJCJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15196DE0)
#define LJOBENMGJCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15196CC0)

inline static constexpr unsigned int LJOBENMGJCJ_TypeDefinitionIndex = 57094;

class LJOBENMGJCJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MEINJKFJIGE; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* ICGBACLFMIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOBENMGJCJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOBENMGJCJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LJOBENMGJCJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOBENMGJCJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
