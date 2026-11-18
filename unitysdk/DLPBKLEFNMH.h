#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DLPBKLEFNMH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19423050)
#define DLPBKLEFNMH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19422F70)
#define DLPBKLEFNMH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19423670)
#define DLPBKLEFNMH__CTOR_OFFSET UNITYSDK_OFFSET(0x19423580)

inline static constexpr unsigned int DLPBKLEFNMH_TypeDefinitionIndex = 59003;

class DLPBKLEFNMH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x28
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBKLEFNMH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBKLEFNMH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DLPBKLEFNMH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPBKLEFNMH_GDEOPIBNOIN_OFFSET))(this);
	}
};
