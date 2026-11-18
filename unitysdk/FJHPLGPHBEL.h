#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FJHPLGPHBEL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11C55D00)
#define FJHPLGPHBEL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11C55C70)
#define FJHPLGPHBEL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11C55FA0)
#define FJHPLGPHBEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11C55F00)

inline static constexpr unsigned int FJHPLGPHBEL_TypeDefinitionIndex = 89404;

class FJHPLGPHBEL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* FLNKNMGGHBK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHPLGPHBEL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHPLGPHBEL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FJHPLGPHBEL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHPLGPHBEL_GDEOPIBNOIN_OFFSET))(this);
	}
};
