#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BPKAFFABBKM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18DBB2F0)
#define BPKAFFABBKM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18DBB030)
#define BPKAFFABBKM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18DBBA90)
#define BPKAFFABBKM__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBB810)

inline static constexpr unsigned int BPKAFFABBKM_TypeDefinitionIndex = 79325;

class BPKAFFABBKM : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* HHGILNNMNAK; // 0x20
	::CPABOPKIGAL* DGLPCINAMAC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* CEJENBBHBBG; // 0x30
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKAFFABBKM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKAFFABBKM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BPKAFFABBKM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKAFFABBKM_GDEOPIBNOIN_OFFSET))(this);
	}
};
