#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DOCOCMBKEAK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F174F0)
#define DOCOCMBKEAK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F17410)
#define DOCOCMBKEAK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F17800)
#define DOCOCMBKEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F17710)

inline static constexpr unsigned int DOCOCMBKEAK_TypeDefinitionIndex = 73446;

class DOCOCMBKEAK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* JPIHKNPJKPH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* EICHHECGHIM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCOCMBKEAK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCOCMBKEAK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DOCOCMBKEAK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCOCMBKEAK_GDEOPIBNOIN_OFFSET))(this);
	}
};
