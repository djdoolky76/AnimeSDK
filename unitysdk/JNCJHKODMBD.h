#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define JNCJHKODMBD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19464D10)
#define JNCJHKODMBD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19464B60)
#define JNCJHKODMBD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19465450)
#define JNCJHKODMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x194652F0)

inline static constexpr unsigned int JNCJHKODMBD_TypeDefinitionIndex = 50900;

class JNCJHKODMBD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* AFFNAHDCFJE; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* DGGAFJIJBIL; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* CAEPEJGLAOL; // 0x38
	::KCMIFNGABDC_1<::System::String*>* PIJHMGACKLM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCJHKODMBD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCJHKODMBD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JNCJHKODMBD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCJHKODMBD_GDEOPIBNOIN_OFFSET))(this);
	}
};
