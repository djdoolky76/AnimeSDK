#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define GDMLCBLFLGJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x125C7670)
#define GDMLCBLFLGJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x125C7470)
#define GDMLCBLFLGJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x125C7A40)
#define GDMLCBLFLGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x125C7830)

inline static constexpr unsigned int GDMLCBLFLGJ_TypeDefinitionIndex = 64741;

class GDMLCBLFLGJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* PPJHNALBEJC; // 0x18
	::CPABOPKIGAL* BFHDIBMFKKJ; // 0x20
	::CPABOPKIGAL* LBJADMFHFCC; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* FOADNBFNDEL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLCBLFLGJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLCBLFLGJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GDMLCBLFLGJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMLCBLFLGJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
