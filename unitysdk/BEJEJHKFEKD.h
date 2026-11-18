#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define BEJEJHKFEKD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x143D2890)
#define BEJEJHKFEKD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x143D26E0)
#define BEJEJHKFEKD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x143D2B20)
#define BEJEJHKFEKD__CTOR_OFFSET UNITYSDK_OFFSET(0x143D29E0)

inline static constexpr unsigned int BEJEJHKFEKD_TypeDefinitionIndex = 61547;

class BEJEJHKFEKD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MLNKCNJEOMI; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* CIFLENFEEGN; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJEJHKFEKD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJEJHKFEKD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BEJEJHKFEKD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJEJHKFEKD_GDEOPIBNOIN_OFFSET))(this);
	}
};
