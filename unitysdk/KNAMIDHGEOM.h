#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define KNAMIDHGEOM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17728330)
#define KNAMIDHGEOM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x177280D0)
#define KNAMIDHGEOM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17728770)
#define KNAMIDHGEOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17728570)

inline static constexpr unsigned int KNAMIDHGEOM_TypeDefinitionIndex = 59602;

class KNAMIDHGEOM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* JLDMPPJKOIE; // 0x18
	::MKBBPOFGLOF* EJOJIDBOMIF; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::Single>* NAIDADGNEDI; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* FKNNIDCLMMI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAMIDHGEOM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAMIDHGEOM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KNAMIDHGEOM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAMIDHGEOM_GDEOPIBNOIN_OFFSET))(this);
	}
};
