#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HGNKIOBCLKL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17AF6D80)
#define HGNKIOBCLKL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17AF6CA0)
#define HGNKIOBCLKL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17AF7010)
#define HGNKIOBCLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF6F20)

inline static constexpr unsigned int HGNKIOBCLKL_TypeDefinitionIndex = 69343;

class HGNKIOBCLKL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BAMNNHJBOLG; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* BJDBKHFJGEM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNKIOBCLKL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNKIOBCLKL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HGNKIOBCLKL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNKIOBCLKL_GDEOPIBNOIN_OFFSET))(this);
	}
};
