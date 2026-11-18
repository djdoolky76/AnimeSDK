#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGGPIOIJELD;
class NKEGAKMNAGM_HKABGPAPDPF;

#define NKEGAKMNAGM_JJEJHMOIIFH_LBPLBNJNBAD_OFFSET UNITYSDK_OFFSET(0x105C4890)
#define NKEGAKMNAGM_JJEJHMOIIFH__CTOR_OFFSET UNITYSDK_OFFSET(0x105C4880)

inline static constexpr unsigned int NKEGAKMNAGM_JJEJHMOIIFH_TypeDefinitionIndex = 82156;

class NKEGAKMNAGM_JJEJHMOIIFH : public ::System::Object
{
public:
	::GGGPIOIJELD* CCCBJNLDMEM; // 0x10
	::NKEGAKMNAGM_HKABGPAPDPF* FGBNBFHOKAA; // 0x18
	::System::Boolean APBONFCBAMB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_JJEJHMOIIFH__CTOR_OFFSET))(this);
	}

	::System::Void LBPLBNJNBAD(::System::Boolean JCJDLICAODK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_JJEJHMOIIFH_LBPLBNJNBAD_OFFSET))(this, JCJDLICAODK);
	}
};
