#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;

#define FAGMAJDCAFD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11AAE7B0)
#define FAGMAJDCAFD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11AAE720)
#define FAGMAJDCAFD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11AAE840)
#define FAGMAJDCAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAE800)

inline static constexpr unsigned int FAGMAJDCAFD_TypeDefinitionIndex = 59675;

class FAGMAJDCAFD : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGMAJDCAFD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGMAJDCAFD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FAGMAJDCAFD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGMAJDCAFD_GDEOPIBNOIN_OFFSET))(this);
	}
};
