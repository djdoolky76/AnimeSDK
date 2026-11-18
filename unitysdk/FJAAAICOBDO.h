#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FJAAAICOBDO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E668B0)
#define FJAAAICOBDO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E667E0)
#define FJAAAICOBDO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E66BB0)
#define FJAAAICOBDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15E66AC0)

inline static constexpr unsigned int FJAAAICOBDO_TypeDefinitionIndex = 57101;

class FJAAAICOBDO : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* HHGILNNMNAK; // 0x18
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAAAICOBDO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAAAICOBDO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FJAAAICOBDO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAAAICOBDO_GDEOPIBNOIN_OFFSET))(this);
	}
};
