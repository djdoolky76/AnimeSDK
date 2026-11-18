#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OKEBKCGONHJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16C1BCA0)
#define OKEBKCGONHJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C1BAF0)
#define OKEBKCGONHJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C1C000)
#define OKEBKCGONHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1BEA0)

inline static constexpr unsigned int OKEBKCGONHJ_TypeDefinitionIndex = 51757;

class OKEBKCGONHJ : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* MEINJKFJIGE; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* ICGBACLFMIL; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* FBPAIFGOKGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBKCGONHJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBKCGONHJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OKEBKCGONHJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBKCGONHJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
