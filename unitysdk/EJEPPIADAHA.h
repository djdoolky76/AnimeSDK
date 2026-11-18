#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define EJEPPIADAHA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1699F2A0)
#define EJEPPIADAHA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1699F150)
#define EJEPPIADAHA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1699F650)
#define EJEPPIADAHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1699F520)

inline static constexpr unsigned int EJEPPIADAHA_TypeDefinitionIndex = 51788;

class EJEPPIADAHA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FGKDFALJAJA; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* KNELOGGPHBM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEPPIADAHA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEPPIADAHA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EJEPPIADAHA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEPPIADAHA_GDEOPIBNOIN_OFFSET))(this);
	}
};
