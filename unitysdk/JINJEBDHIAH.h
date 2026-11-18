#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define JINJEBDHIAH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1873D7A0)
#define JINJEBDHIAH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1873D660)
#define JINJEBDHIAH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1873D9E0)
#define JINJEBDHIAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1873D8E0)

inline static constexpr unsigned int JINJEBDHIAH_TypeDefinitionIndex = 57315;

class JINJEBDHIAH : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINJEBDHIAH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINJEBDHIAH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JINJEBDHIAH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINJEBDHIAH_GDEOPIBNOIN_OFFSET))(this);
	}
};
