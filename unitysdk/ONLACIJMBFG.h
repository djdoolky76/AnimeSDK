#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define ONLACIJMBFG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FF2C40)
#define ONLACIJMBFG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FF2B00)
#define ONLACIJMBFG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FF2E60)
#define ONLACIJMBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF2D60)

inline static constexpr unsigned int ONLACIJMBFG_TypeDefinitionIndex = 88539;

class ONLACIJMBFG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* DGDJHGBDBBK; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLACIJMBFG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLACIJMBFG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONLACIJMBFG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLACIJMBFG_GDEOPIBNOIN_OFFSET))(this);
	}
};
