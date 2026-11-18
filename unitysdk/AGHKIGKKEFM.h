#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCPFJIOFEKC.h"
#include "unitysdk/EDGGFNEELGN.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define AGHKIGKKEFM_MHCOEJFCDJH_OFFSET UNITYSDK_OFFSET(0x1F355820)
#define AGHKIGKKEFM_NIADMEBFPBA_OFFSET UNITYSDK_OFFSET(0x1F355810)
#define AGHKIGKKEFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F355860)

inline static constexpr unsigned int AGHKIGKKEFM_TypeDefinitionIndex = 28788;

class AGHKIGKKEFM : public ::CCPFJIOFEKC
{
public:
	::Il2CppArray<::JGLIFHIAIEH>* PGHHOAHNIKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKIGKKEFM__CTOR_OFFSET))(this);
	}

	::EDGGFNEELGN NIADMEBFPBA()
	{
		return ((::EDGGFNEELGN(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKIGKKEFM_NIADMEBFPBA_OFFSET))(this);
	}

	::System::Single MHCOEJFCDJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKIGKKEFM_MHCOEJFCDJH_OFFSET))(this);
	}
};
