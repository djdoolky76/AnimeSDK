#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define ADKPNJELJCL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x154E2A40)
#define ADKPNJELJCL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x154E2960)
#define ADKPNJELJCL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x154E30F0)
#define ADKPNJELJCL__CTOR_OFFSET UNITYSDK_OFFSET(0x154E3000)

inline static constexpr unsigned int ADKPNJELJCL_TypeDefinitionIndex = 88716;

class ADKPNJELJCL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* ILNIIJKGEFP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKPNJELJCL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKPNJELJCL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ADKPNJELJCL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKPNJELJCL_GDEOPIBNOIN_OFFSET))(this);
	}
};
