#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define GLOIHAIFDBB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149ED150)
#define GLOIHAIFDBB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149ED0C0)
#define GLOIHAIFDBB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x149ED2B0)
#define GLOIHAIFDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x149ED210)

inline static constexpr unsigned int GLOIHAIFDBB_TypeDefinitionIndex = 82700;

class GLOIHAIFDBB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Single>* NFODDLKDBEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOIHAIFDBB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOIHAIFDBB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GLOIHAIFDBB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOIHAIFDBB_GDEOPIBNOIN_OFFSET))(this);
	}
};
