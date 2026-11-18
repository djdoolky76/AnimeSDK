#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define CDNNNEGGHPN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x145AED70)
#define CDNNNEGGHPN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x145AECE0)
#define CDNNNEGGHPN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x145AFC80)
#define CDNNNEGGHPN_OAEALPIPAAA_OFFSET UNITYSDK_OFFSET(0x145AF060)
#define CDNNNEGGHPN__CTOR_OFFSET UNITYSDK_OFFSET(0x145AFBE0)

inline static constexpr unsigned int CDNNNEGGHPN_TypeDefinitionIndex = 91403;

class CDNNNEGGHPN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* HIBANBCJEMD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNNNEGGHPN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNNNEGGHPN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CDNNNEGGHPN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNNNEGGHPN_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void OAEALPIPAAA(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CDNNNEGGHPN_OAEALPIPAAA_OFFSET))(KECKGDFIALJ);
	}
};
