#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HBCGIHJPHAC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149304B0)
#define HBCGIHJPHAC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14930370)
#define HBCGIHJPHAC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14930C50)
#define HBCGIHJPHAC__CTOR_OFFSET UNITYSDK_OFFSET(0x14930B30)

inline static constexpr unsigned int HBCGIHJPHAC_TypeDefinitionIndex = 80435;

class HBCGIHJPHAC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* NFKGCHIGEHC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCGIHJPHAC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCGIHJPHAC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBCGIHJPHAC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCGIHJPHAC_GDEOPIBNOIN_OFFSET))(this);
	}
};
