#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NFHJAIHPCLL_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x13142530)
#define NFHJAIHPCLL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x131424C0)
#define NFHJAIHPCLL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x131423E0)
#define NFHJAIHPCLL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13142700)
#define NFHJAIHPCLL__CTOR_OFFSET UNITYSDK_OFFSET(0x13142610)

inline static constexpr unsigned int NFHJAIHPCLL_TypeDefinitionIndex = 50333;

class NFHJAIHPCLL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* EJCNOOILOCG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* BOHBDHAPLDN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHJAIHPCLL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHJAIHPCLL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NFHJAIHPCLL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NFHJAIHPCLL_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHJAIHPCLL_GDEOPIBNOIN_OFFSET))(this);
	}
};
