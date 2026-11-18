#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AKLMCFLFCJG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16D8D060)
#define AKLMCFLFCJG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16D8CE60)
#define AKLMCFLFCJG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16D8D500)
#define AKLMCFLFCJG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8D3B0)

inline static constexpr unsigned int AKLMCFLFCJG_TypeDefinitionIndex = 67893;

class AKLMCFLFCJG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* KPJABIGHNFG; // 0x18
	::HOFAIFGAHGJ* HKOPFAINGHP; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* BMACBPEHHKB; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLMCFLFCJG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLMCFLFCJG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AKLMCFLFCJG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLMCFLFCJG_GDEOPIBNOIN_OFFSET))(this);
	}
};
