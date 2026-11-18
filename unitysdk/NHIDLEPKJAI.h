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

#define NHIDLEPKJAI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13149BE0)
#define NHIDLEPKJAI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13149980)
#define NHIDLEPKJAI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1314A1D0)
#define NHIDLEPKJAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1314A010)

inline static constexpr unsigned int NHIDLEPKJAI_TypeDefinitionIndex = 67326;

class NHIDLEPKJAI : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* HHGILNNMNAK; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x38
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDLEPKJAI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDLEPKJAI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NHIDLEPKJAI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDLEPKJAI_GDEOPIBNOIN_OFFSET))(this);
	}
};
