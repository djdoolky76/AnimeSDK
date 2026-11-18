#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class EAPFBJCHMOJ;

#define OBFBDFGNCKC_BBPBMELCKHB_OFFSET UNITYSDK_OFFSET(0x13A47E80)
#define OBFBDFGNCKC_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x13A47A20)
#define OBFBDFGNCKC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A47A10)

inline static constexpr unsigned int OBFBDFGNCKC_TypeDefinitionIndex = 42136;

class OBFBDFGNCKC : public ::System::Object
{
public:
	::EAPFBJCHMOJ* PPGICFDLEIJ; // 0x10
	::MoleMole::EntityHandle HPEFMJFCIHN; // 0x18
	::System::Boolean DAEMBKGHEPP; // 0x28

	::System::Void _ctor(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + OBFBDFGNCKC__CTOR_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFBDFGNCKC_GPKMPDHNCGL_OFFSET))(this);
	}

	::System::Void BBPBMELCKHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFBDFGNCKC_BBPBMELCKHB_OFFSET))(this);
	}
};
