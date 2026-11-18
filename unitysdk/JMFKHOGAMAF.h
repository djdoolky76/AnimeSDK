#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JMFKHOGAMAF_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1309AB10)
#define JMFKHOGAMAF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1309AAA0)
#define JMFKHOGAMAF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1309A8F0)
#define JMFKHOGAMAF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1309ADE0)
#define JMFKHOGAMAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1309ACA0)

inline static constexpr unsigned int JMFKHOGAMAF_TypeDefinitionIndex = 64520;

class JMFKHOGAMAF : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* MHGKBLEIKKE; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* MFOIHNFNKKG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFKHOGAMAF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFKHOGAMAF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JMFKHOGAMAF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFKHOGAMAF_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JMFKHOGAMAF_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
