#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CPMPOPBAHLD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13E1E740)
#define CPMPOPBAHLD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13E1E670)
#define CPMPOPBAHLD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13E1EA50)
#define CPMPOPBAHLD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E1E960)

inline static constexpr unsigned int CPMPOPBAHLD_TypeDefinitionIndex = 72336;

class CPMPOPBAHLD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* HHGILNNMNAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPOPBAHLD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPOPBAHLD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPMPOPBAHLD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPOPBAHLD_GDEOPIBNOIN_OFFSET))(this);
	}
};
