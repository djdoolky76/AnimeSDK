#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define FEJOHKDIEAP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xBB3A380)
#define FEJOHKDIEAP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xBB3A240)
#define FEJOHKDIEAP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xBB3A610)
#define FEJOHKDIEAP__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3A510)

inline static constexpr unsigned int FEJOHKDIEAP_TypeDefinitionIndex = 47880;

class FEJOHKDIEAP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* LNBDLGCHGAF; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJOHKDIEAP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJOHKDIEAP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FEJOHKDIEAP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJOHKDIEAP_GDEOPIBNOIN_OFFSET))(this);
	}
};
