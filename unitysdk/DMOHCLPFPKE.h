#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define DMOHCLPFPKE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x16979210)
#define DMOHCLPFPKE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x169791A0)
#define DMOHCLPFPKE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16978F40)
#define DMOHCLPFPKE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x169795D0)
#define DMOHCLPFPKE__CTOR_OFFSET UNITYSDK_OFFSET(0x16979410)

inline static constexpr unsigned int DMOHCLPFPKE_TypeDefinitionIndex = 78368;

class DMOHCLPFPKE : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* FBBJJDMEEDG; // 0x20
	::KCMIFNGABDC_1<::System::Single>* NHKNILFDKGG; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OMIELCJKEOD; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOHCLPFPKE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOHCLPFPKE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DMOHCLPFPKE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DMOHCLPFPKE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOHCLPFPKE_GDEOPIBNOIN_OFFSET))(this);
	}
};
