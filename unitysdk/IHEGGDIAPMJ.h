#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IHEGGDIAPMJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A467290)
#define IHEGGDIAPMJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A467200)
#define IHEGGDIAPMJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A4674C0)
#define IHEGGDIAPMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A467420)

inline static constexpr unsigned int IHEGGDIAPMJ_TypeDefinitionIndex = 44018;

class IHEGGDIAPMJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEGGDIAPMJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEGGDIAPMJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHEGGDIAPMJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEGGDIAPMJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
