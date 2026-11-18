#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GPNENNJMCFN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D75EB0)
#define GPNENNJMCFN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D75E20)
#define GPNENNJMCFN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D762E0)
#define GPNENNJMCFN__CTOR_OFFSET UNITYSDK_OFFSET(0x13D76240)

inline static constexpr unsigned int GPNENNJMCFN_TypeDefinitionIndex = 54319;

class GPNENNJMCFN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FNLGDLHAEGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNENNJMCFN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNENNJMCFN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GPNENNJMCFN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNENNJMCFN_GDEOPIBNOIN_OFFSET))(this);
	}
};
