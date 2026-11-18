#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CFFEMIPHMFL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18DCCB70)
#define CFFEMIPHMFL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18DCC8B0)
#define CFFEMIPHMFL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18DCD5D0)
#define CFFEMIPHMFL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCD350)

inline static constexpr unsigned int CFFEMIPHMFL_TypeDefinitionIndex = 38516;

class CFFEMIPHMFL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* DGLPCINAMAC; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* HHGILNNMNAK; // 0x20
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFEMIPHMFL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFEMIPHMFL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CFFEMIPHMFL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFEMIPHMFL_GDEOPIBNOIN_OFFSET))(this);
	}
};
