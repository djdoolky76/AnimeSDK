#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define ONLCOILEMMF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18457C60)
#define ONLCOILEMMF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18457A60)
#define ONLCOILEMMF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18457FC0)
#define ONLCOILEMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x18457E40)

inline static constexpr unsigned int ONLCOILEMMF_TypeDefinitionIndex = 90702;

class ONLCOILEMMF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* PLGPLKJABLO; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* NELIBACDGMB; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* OEHIJBAMGAI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLCOILEMMF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLCOILEMMF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONLCOILEMMF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLCOILEMMF_GDEOPIBNOIN_OFFSET))(this);
	}
};
