#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KGPOPJDDOFK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD3F7920)
#define KGPOPJDDOFK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xD3F77E0)
#define KGPOPJDDOFK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xD3F7B10)
#define KGPOPJDDOFK__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F79F0)

inline static constexpr unsigned int KGPOPJDDOFK_TypeDefinitionIndex = 50957;

class KGPOPJDDOFK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int64>* MEINJKFJIGE; // 0x18
	::KCMIFNGABDC_1<::System::Int64>* ICGBACLFMIL; // 0x20
	::AAMKEDEDHPD_1<::System::Int64>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPOPJDDOFK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPOPJDDOFK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KGPOPJDDOFK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPOPJDDOFK_GDEOPIBNOIN_OFFSET))(this);
	}
};
