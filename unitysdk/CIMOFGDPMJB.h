#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define CIMOFGDPMJB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A10D10)
#define CIMOFGDPMJB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A10BD0)
#define CIMOFGDPMJB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A11030)
#define CIMOFGDPMJB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A10F30)

inline static constexpr unsigned int CIMOFGDPMJB_TypeDefinitionIndex = 56634;

class CIMOFGDPMJB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* ELOCGINEIEO; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOFGDPMJB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOFGDPMJB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CIMOFGDPMJB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOFGDPMJB_GDEOPIBNOIN_OFFSET))(this);
	}
};
