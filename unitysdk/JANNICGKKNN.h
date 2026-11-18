#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JANNICGKKNN_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x15C33150)
#define JANNICGKKNN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15C330C0)
#define JANNICGKKNN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15C32EC0)
#define JANNICGKKNN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15C334C0)
#define JANNICGKKNN__CTOR_OFFSET UNITYSDK_OFFSET(0x15C33340)

inline static constexpr unsigned int JANNICGKKNN_TypeDefinitionIndex = 59272;

class JANNICGKKNN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* BAEAGOKNGJK; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNICGKKNN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNICGKKNN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JANNICGKKNN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JANNICGKKNN_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANNICGKKNN_GDEOPIBNOIN_OFFSET))(this);
	}
};
