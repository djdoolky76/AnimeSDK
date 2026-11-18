#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define LBNBDNBEFAO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15807460)
#define LBNBDNBEFAO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15807380)
#define LBNBDNBEFAO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x158076A0)
#define LBNBDNBEFAO__CTOR_OFFSET UNITYSDK_OFFSET(0x158075B0)

inline static constexpr unsigned int LBNBDNBEFAO_TypeDefinitionIndex = 85589;

class LBNBDNBEFAO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* BJDBKHFJGEM; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* BAMNNHJBOLG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNBDNBEFAO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNBDNBEFAO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LBNBDNBEFAO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNBDNBEFAO_GDEOPIBNOIN_OFFSET))(this);
	}
};
