#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GAHOBEMLMGG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15CCFD30)
#define GAHOBEMLMGG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15CCFC50)
#define GAHOBEMLMGG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15CD01B0)
#define GAHOBEMLMGG__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD00C0)

inline static constexpr unsigned int GAHOBEMLMGG_TypeDefinitionIndex = 89007;

class GAHOBEMLMGG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* KDLCIJMIGHE; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHOBEMLMGG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHOBEMLMGG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GAHOBEMLMGG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHOBEMLMGG_GDEOPIBNOIN_OFFSET))(this);
	}
};
