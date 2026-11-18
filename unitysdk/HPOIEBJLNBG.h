#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HPOIEBJLNBG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1655A3F0)
#define HPOIEBJLNBG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1655A2B0)
#define HPOIEBJLNBG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1655A5E0)
#define HPOIEBJLNBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1655A4C0)

inline static constexpr unsigned int HPOIEBJLNBG_TypeDefinitionIndex = 67103;

class HPOIEBJLNBG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int64>* MEINJKFJIGE; // 0x18
	::KCMIFNGABDC_1<::System::Int64>* ICGBACLFMIL; // 0x20
	::AAMKEDEDHPD_1<::System::Int64>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOIEBJLNBG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOIEBJLNBG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HPOIEBJLNBG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPOIEBJLNBG_GDEOPIBNOIN_OFFSET))(this);
	}
};
