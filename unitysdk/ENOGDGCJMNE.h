#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define ENOGDGCJMNE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14279FF0)
#define ENOGDGCJMNE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14279EB0)
#define ENOGDGCJMNE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1427A1F0)
#define ENOGDGCJMNE__CTOR_OFFSET UNITYSDK_OFFSET(0x1427A0D0)

inline static constexpr unsigned int ENOGDGCJMNE_TypeDefinitionIndex = 53169;

class ENOGDGCJMNE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* ICGBACLFMIL; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* MEINJKFJIGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGDGCJMNE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGDGCJMNE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ENOGDGCJMNE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOGDGCJMNE_GDEOPIBNOIN_OFFSET))(this);
	}
};
