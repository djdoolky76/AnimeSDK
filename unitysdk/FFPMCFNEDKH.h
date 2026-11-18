#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define FFPMCFNEDKH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x156B95A0)
#define FFPMCFNEDKH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x156B9510)
#define FFPMCFNEDKH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x156B96A0)
#define FFPMCFNEDKH__CTOR_OFFSET UNITYSDK_OFFSET(0x156B9600)

inline static constexpr unsigned int FFPMCFNEDKH_TypeDefinitionIndex = 88449;

class FFPMCFNEDKH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* ELGJIGOCMHL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPMCFNEDKH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPMCFNEDKH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FFPMCFNEDKH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPMCFNEDKH_GDEOPIBNOIN_OFFSET))(this);
	}
};
