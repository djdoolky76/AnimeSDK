#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KNPKBIBACJL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x129ABE60)
#define KNPKBIBACJL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x129ABC00)
#define KNPKBIBACJL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x129AC420)
#define KNPKBIBACJL__CTOR_OFFSET UNITYSDK_OFFSET(0x129AC260)

inline static constexpr unsigned int KNPKBIBACJL_TypeDefinitionIndex = 54401;

class KNPKBIBACJL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Single>* BDBLHJFHMOC; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* GAGHLBKMEDP; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* PJHBOAGOKHB; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::AAMKEDEDHPD_1<::System::Int32>* KIHINNOFIHD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPKBIBACJL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPKBIBACJL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KNPKBIBACJL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPKBIBACJL_GDEOPIBNOIN_OFFSET))(this);
	}
};
