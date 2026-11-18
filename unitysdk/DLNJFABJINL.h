#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define DLNJFABJINL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x134555A0)
#define DLNJFABJINL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13455460)
#define DLNJFABJINL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x134557C0)
#define DLNJFABJINL__CTOR_OFFSET UNITYSDK_OFFSET(0x134556C0)

inline static constexpr unsigned int DLNJFABJINL_TypeDefinitionIndex = 79001;

class DLNJFABJINL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* IHLDIOOCHEM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNJFABJINL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNJFABJINL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DLNJFABJINL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNJFABJINL_GDEOPIBNOIN_OFFSET))(this);
	}
};
