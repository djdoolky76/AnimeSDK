#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BGKLACHIBKI_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x169F17C0)
#define BGKLACHIBKI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x169F1750)
#define BGKLACHIBKI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x169F1670)
#define BGKLACHIBKI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x169F1A10)
#define BGKLACHIBKI__CTOR_OFFSET UNITYSDK_OFFSET(0x169F1920)

inline static constexpr unsigned int BGKLACHIBKI_TypeDefinitionIndex = 74935;

class BGKLACHIBKI : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* BOHBDHAPLDN; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* EJCNOOILOCG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKLACHIBKI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKLACHIBKI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BGKLACHIBKI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKLACHIBKI_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BGKLACHIBKI_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
