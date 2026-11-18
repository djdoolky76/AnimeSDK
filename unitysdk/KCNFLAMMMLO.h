#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define KCNFLAMMMLO__CTOR_OFFSET UNITYSDK_OFFSET(0x6FAEA0)

inline static constexpr unsigned int KCNFLAMMMLO_TypeDefinitionIndex = 58282;

struct alignas(4) KCNFLAMMMLO
{
	::System::UInt32 JABPECIDLFP; // 0x10
	::System::UInt32 HBFCDLLPFGK; // 0x14
	::System::Single CFINDDBFBEO; // 0x18

	::System::Void _ctor(::System::Single FNIOPKPHDEH, ::System::UInt32 LEKDIELOEMM, ::System::UInt32 HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KCNFLAMMMLO__CTOR_OFFSET))(this, FNIOPKPHDEH, LEKDIELOEMM, HODAIDNDKHD);
	}
};
