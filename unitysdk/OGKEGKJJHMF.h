#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OGKEGKJJHMF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FDDD90)
#define OGKEGKJJHMF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FDD9C0)
#define OGKEGKJJHMF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FDE8A0)
#define OGKEGKJJHMF_OOHIHGCPMMI_OFFSET UNITYSDK_OFFSET(0x15FDE530)
#define OGKEGKJJHMF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDE570)

inline static constexpr unsigned int OGKEGKJJHMF_TypeDefinitionIndex = 77097;

class OGKEGKJJHMF : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* EECKBDGPOFI; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* LLOCPANIFKH; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* PJNIFNDCOGD; // 0x30
	::AAMKEDEDHPD_1<::System::Boolean>* OJAMPHDOBJA; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x48
	::CPABOPKIGAL* DGLPCINAMAC; // 0x50
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x58
	::AAMKEDEDHPD_1<::System::Int32>* BOBHGKFBPOE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKEGKJJHMF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKEGKJJHMF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OGKEGKJJHMF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void OOHIHGCPMMI(::LGCNEDCMPKM& BPBLBAJCDAH)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OGKEGKJJHMF_OOHIHGCPMMI_OFFSET))(this, BPBLBAJCDAH);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKEGKJJHMF_GDEOPIBNOIN_OFFSET))(this);
	}
};
