#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGGPIOIJELD;

#define NKEGAKMNAGM_KEGLIEFCDHB_OHKCGAOJBPL_OFFSET UNITYSDK_OFFSET(0x11F86EE0)
#define NKEGAKMNAGM_KEGLIEFCDHB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F86ED0)

inline static constexpr unsigned int NKEGAKMNAGM_KEGLIEFCDHB_TypeDefinitionIndex = 82166;

class NKEGAKMNAGM_KEGLIEFCDHB : public ::System::Object
{
public:
	::GGGPIOIJELD* CCCBJNLDMEM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_KEGLIEFCDHB__CTOR_OFFSET))(this);
	}

	::System::Void OHKCGAOJBPL(::System::Boolean JCJDLICAODK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_KEGLIEFCDHB_OHKCGAOJBPL_OFFSET))(this, JCJDLICAODK);
	}
};
