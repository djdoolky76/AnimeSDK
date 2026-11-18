#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define PMCDEANJAEJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1B9F5A80)
#define PMCDEANJAEJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B9F58D0)
#define PMCDEANJAEJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B9F5CB0)
#define PMCDEANJAEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F5B20)

inline static constexpr unsigned int PMCDEANJAEJ_TypeDefinitionIndex = 45308;

class PMCDEANJAEJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* EGMCDKFLGMD; // 0x18
	::CPABOPKIGAL* IMJMBDDPFCL; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* JDBAFGLHNGN; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCDEANJAEJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCDEANJAEJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PMCDEANJAEJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCDEANJAEJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
