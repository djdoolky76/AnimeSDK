#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DBOJJMOJBMD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12400A70)
#define DBOJJMOJBMD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12400930)
#define DBOJJMOJBMD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12400D10)
#define DBOJJMOJBMD__CTOR_OFFSET UNITYSDK_OFFSET(0x12400BF0)

inline static constexpr unsigned int DBOJJMOJBMD_TypeDefinitionIndex = 82324;

class DBOJJMOJBMD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* ICGBACLFMIL; // 0x18
	::KCMIFNGABDC_1<::System::Single>* MEINJKFJIGE; // 0x20
	::AAMKEDEDHPD_1<::System::Single>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOJJMOJBMD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOJJMOJBMD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DBOJJMOJBMD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOJJMOJBMD_GDEOPIBNOIN_OFFSET))(this);
	}
};
