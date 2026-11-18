#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define AEKEBLJPCJI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16D6A150)
#define AEKEBLJPCJI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16D6A0C0)
#define AEKEBLJPCJI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16D6A350)
#define AEKEBLJPCJI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6A2B0)

inline static constexpr unsigned int AEKEBLJPCJI_TypeDefinitionIndex = 67648;

class AEKEBLJPCJI : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* GPJCGPEGFIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEBLJPCJI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEBLJPCJI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AEKEBLJPCJI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEBLJPCJI_GDEOPIBNOIN_OFFSET))(this);
	}
};
