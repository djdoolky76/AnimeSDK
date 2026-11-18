#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELFFONPBBD;

#define MKFNBHDICNJ_FDELJMNGMOD_CDICGKOHLPG_OFFSET UNITYSDK_OFFSET(0x12FF92F0)
#define MKFNBHDICNJ_FDELJMNGMOD__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF92E0)

inline static constexpr unsigned int MKFNBHDICNJ_FDELJMNGMOD_TypeDefinitionIndex = 61387;

class MKFNBHDICNJ_FDELJMNGMOD : public ::System::Object
{
public:
	::System::UInt32 KECCCICJPHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FDELJMNGMOD__CTOR_OFFSET))(this);
	}

	::System::Boolean CDICGKOHLPG(::MELFFONPBBD* ONOAGAPJNCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MELFFONPBBD*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FDELJMNGMOD_CDICGKOHLPG_OFFSET))(this, ONOAGAPJNCG);
	}
};
