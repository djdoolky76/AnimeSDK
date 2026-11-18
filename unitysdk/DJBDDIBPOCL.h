#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DJBDDIBPOCL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149AFDB0)
#define DJBDDIBPOCL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149AFC70)
#define DJBDDIBPOCL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x149AFFA0)
#define DJBDDIBPOCL__CTOR_OFFSET UNITYSDK_OFFSET(0x149AFE80)

inline static constexpr unsigned int DJBDDIBPOCL_TypeDefinitionIndex = 69898;

class DJBDDIBPOCL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MEINJKFJIGE; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* ICGBACLFMIL; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBDDIBPOCL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBDDIBPOCL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DJBDDIBPOCL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBDDIBPOCL_GDEOPIBNOIN_OFFSET))(this);
	}
};
