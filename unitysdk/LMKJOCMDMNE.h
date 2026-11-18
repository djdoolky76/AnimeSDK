#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define LMKJOCMDMNE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DCA000)
#define LMKJOCMDMNE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DC9F20)
#define LMKJOCMDMNE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DCA240)
#define LMKJOCMDMNE__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCA150)

inline static constexpr unsigned int LMKJOCMDMNE_TypeDefinitionIndex = 59565;

class LMKJOCMDMNE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BAMNNHJBOLG; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* BJDBKHFJGEM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKJOCMDMNE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKJOCMDMNE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LMKJOCMDMNE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKJOCMDMNE_GDEOPIBNOIN_OFFSET))(this);
	}
};
