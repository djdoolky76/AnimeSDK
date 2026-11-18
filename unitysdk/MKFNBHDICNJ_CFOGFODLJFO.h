#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class JKMCFFKLLKE;

#define MKFNBHDICNJ_CFOGFODLJFO_KCJEDNJLHMC_OFFSET UNITYSDK_OFFSET(0x11F56A60)
#define MKFNBHDICNJ_CFOGFODLJFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11F56A50)

inline static constexpr unsigned int MKFNBHDICNJ_CFOGFODLJFO_TypeDefinitionIndex = 61406;

class MKFNBHDICNJ_CFOGFODLJFO : public ::System::Object
{
public:
	::JKMCFFKLLKE* IMLJJNNMKGP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CFOGFODLJFO__CTOR_OFFSET))(this);
	}

	::System::Boolean KCJEDNJLHMC(::DJPEEJFNCHL* FGMNCNLGPAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CFOGFODLJFO_KCJEDNJLHMC_OFFSET))(this, FGMNCNLGPAP);
	}
};
