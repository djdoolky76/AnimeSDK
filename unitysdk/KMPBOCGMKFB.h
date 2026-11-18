#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define KMPBOCGMKFB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x129A8CB0)
#define KMPBOCGMKFB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x129A8B00)
#define KMPBOCGMKFB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x129A9150)
#define KMPBOCGMKFB__CTOR_OFFSET UNITYSDK_OFFSET(0x129A9010)

inline static constexpr unsigned int KMPBOCGMKFB_TypeDefinitionIndex = 38466;

class KMPBOCGMKFB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* ELAADEDGEIL; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPBOCGMKFB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPBOCGMKFB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KMPBOCGMKFB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPBOCGMKFB_GDEOPIBNOIN_OFFSET))(this);
	}
};
