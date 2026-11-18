#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define OLJEAGNJBAA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14F8B9C0)
#define OLJEAGNJBAA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14F8B930)
#define OLJEAGNJBAA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14F8BAD0)
#define OLJEAGNJBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x14F8BA30)

inline static constexpr unsigned int OLJEAGNJBAA_TypeDefinitionIndex = 86135;

class OLJEAGNJBAA : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FJMNMKPGFIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJEAGNJBAA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJEAGNJBAA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OLJEAGNJBAA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJEAGNJBAA_GDEOPIBNOIN_OFFSET))(this);
	}
};
