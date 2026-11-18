#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JDLGOEJJLOB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14FA9530)
#define JDLGOEJJLOB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14FA93F0)
#define JDLGOEJJLOB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14FA9890)
#define JDLGOEJJLOB__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA9740)

inline static constexpr unsigned int JDLGOEJJLOB_TypeDefinitionIndex = 87352;

class JDLGOEJJLOB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* NHEHCPOKAHM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGOEJJLOB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGOEJJLOB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JDLGOEJJLOB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGOEJJLOB_GDEOPIBNOIN_OFFSET))(this);
	}
};
