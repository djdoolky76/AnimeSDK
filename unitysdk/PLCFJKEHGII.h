#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PLCFJKEHGII_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1D9CFE10)
#define PLCFJKEHGII_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1D9CFBB0)
#define PLCFJKEHGII_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1D9D06B0)
#define PLCFJKEHGII__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D0470)

inline static constexpr unsigned int PLCFJKEHGII_TypeDefinitionIndex = 56276;

class PLCFJKEHGII : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* HHGILNNMNAK; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::CPABOPKIGAL* DGLPCINAMAC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCFJKEHGII__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCFJKEHGII_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PLCFJKEHGII_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCFJKEHGII_GDEOPIBNOIN_OFFSET))(this);
	}
};
