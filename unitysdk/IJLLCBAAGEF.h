#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define IJLLCBAAGEF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A27A30)
#define IJLLCBAAGEF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A279A0)
#define IJLLCBAAGEF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A27D20)
#define IJLLCBAAGEF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A27C80)

inline static constexpr unsigned int IJLLCBAAGEF_TypeDefinitionIndex = 38861;

class IJLLCBAAGEF : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLLCBAAGEF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLLCBAAGEF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IJLLCBAAGEF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLLCBAAGEF_GDEOPIBNOIN_OFFSET))(this);
	}
};
