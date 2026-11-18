#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GKJNCIMHIIF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14CF6120)
#define GKJNCIMHIIF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14CF5F70)
#define GKJNCIMHIIF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14CF64A0)
#define GKJNCIMHIIF__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF6340)

inline static constexpr unsigned int GKJNCIMHIIF_TypeDefinitionIndex = 60392;

class GKJNCIMHIIF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* CEBMPMAOEFO; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* EILBICLEFEI; // 0x38
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJNCIMHIIF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJNCIMHIIF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GKJNCIMHIIF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJNCIMHIIF_GDEOPIBNOIN_OFFSET))(this);
	}
};
