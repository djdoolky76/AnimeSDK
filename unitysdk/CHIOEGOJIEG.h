#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CHIOEGOJIEG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14551AE0)
#define CHIOEGOJIEG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x145519A0)
#define CHIOEGOJIEG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14551D30)
#define CHIOEGOJIEG__CTOR_OFFSET UNITYSDK_OFFSET(0x14551C10)

inline static constexpr unsigned int CHIOEGOJIEG_TypeDefinitionIndex = 65958;

class CHIOEGOJIEG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICGBACLFMIL; // 0x18
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* MEINJKFJIGE; // 0x20
	::AAMKEDEDHPD_1<::System::Single>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEGOJIEG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEGOJIEG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHIOEGOJIEG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOEGOJIEG_GDEOPIBNOIN_OFFSET))(this);
	}
};
