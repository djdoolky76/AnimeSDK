#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

template <typename T> class KCMIFNGABDC_1;

#define CJGPAGHNNKK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14556050)
#define CJGPAGHNNKK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14555FC0)
#define CJGPAGHNNKK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x145573D0)
#define CJGPAGHNNKK_OAEALPIPAAA_OFFSET UNITYSDK_OFFSET(0x145567B0)
#define CJGPAGHNNKK__CTOR_OFFSET UNITYSDK_OFFSET(0x14557330)

inline static constexpr unsigned int CJGPAGHNNKK_TypeDefinitionIndex = 60213;

class CJGPAGHNNKK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* GJBGDDIPAOM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGPAGHNNKK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGPAGHNNKK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CJGPAGHNNKK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void OAEALPIPAAA(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CJGPAGHNNKK_OAEALPIPAAA_OFFSET))(KECKGDFIALJ);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGPAGHNNKK_GDEOPIBNOIN_OFFSET))(this);
	}
};
