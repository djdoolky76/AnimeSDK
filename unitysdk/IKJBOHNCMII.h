#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IKJBOHNCMII_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13811AE0)
#define IKJBOHNCMII_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13811930)
#define IKJBOHNCMII_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13811E00)
#define IKJBOHNCMII__CTOR_OFFSET UNITYSDK_OFFSET(0x13811CC0)

inline static constexpr unsigned int IKJBOHNCMII_TypeDefinitionIndex = 50969;

class IKJBOHNCMII : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* NDFBIIHFHIC; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* NNNPLPPOCCA; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJBOHNCMII__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJBOHNCMII_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IKJBOHNCMII_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJBOHNCMII_GDEOPIBNOIN_OFFSET))(this);
	}
};
