#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LFLFBBKFKJO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x126D9B50)
#define LFLFBBKFKJO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x126D9950)
#define LFLFBBKFKJO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x126D9F80)
#define LFLFBBKFKJO__CTOR_OFFSET UNITYSDK_OFFSET(0x126D9DB0)

inline static constexpr unsigned int LFLFBBKFKJO_TypeDefinitionIndex = 69803;

class LFLFBBKFKJO : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x18
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x20
	::CPABOPKIGAL* DGLPCINAMAC; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* HHGILNNMNAK; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLFBBKFKJO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLFBBKFKJO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LFLFBBKFKJO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLFBBKFKJO_GDEOPIBNOIN_OFFSET))(this);
	}
};
