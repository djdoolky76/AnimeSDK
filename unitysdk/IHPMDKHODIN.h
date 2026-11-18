#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IHPMDKHODIN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15C11EE0)
#define IHPMDKHODIN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15C11D90)
#define IHPMDKHODIN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15C12360)
#define IHPMDKHODIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15C12230)

inline static constexpr unsigned int IHPMDKHODIN_TypeDefinitionIndex = 65422;

class IHPMDKHODIN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* ENMEIJPEPDB; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* MNFGALDIPCJ; // 0x30
	::KCMIFNGABDC_1<::System::String*>* IDMKDFMOKNC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPMDKHODIN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPMDKHODIN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHPMDKHODIN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPMDKHODIN_GDEOPIBNOIN_OFFSET))(this);
	}
};
