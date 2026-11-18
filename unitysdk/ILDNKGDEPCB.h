#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define ILDNKGDEPCB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A29700)
#define ILDNKGDEPCB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A29550)
#define ILDNKGDEPCB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A29940)
#define ILDNKGDEPCB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A29800)

inline static constexpr unsigned int ILDNKGDEPCB_TypeDefinitionIndex = 85535;

class ILDNKGDEPCB : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* KIHINNOFIHD; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* PJHBOAGOKHB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNKGDEPCB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNKGDEPCB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ILDNKGDEPCB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNKGDEPCB_GDEOPIBNOIN_OFFSET))(this);
	}
};
