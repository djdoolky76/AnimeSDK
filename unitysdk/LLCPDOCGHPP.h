#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LLCPDOCGHPP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11F214D0)
#define LLCPDOCGHPP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F21400)
#define LLCPDOCGHPP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F21710)
#define LLCPDOCGHPP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F21620)

inline static constexpr unsigned int LLCPDOCGHPP_TypeDefinitionIndex = 83319;

class LLCPDOCGHPP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* HHGILNNMNAK; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* FDPMDEJANJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCPDOCGHPP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCPDOCGHPP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LLCPDOCGHPP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCPDOCGHPP_GDEOPIBNOIN_OFFSET))(this);
	}
};
