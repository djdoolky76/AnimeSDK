#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LHCGANEGALN.h"

#define MIIABGMFFHL_LLCPLICBCCF_OFFSET UNITYSDK_OFFSET(0x16C8CD50)
#define MIIABGMFFHL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8CDA0)

inline static constexpr unsigned int MIIABGMFFHL_TypeDefinitionIndex = 77124;

class MIIABGMFFHL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIABGMFFHL__CTOR_OFFSET))(this);
	}

	::System::Void LLCPLICBCCF(::LHCGANEGALN& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LHCGANEGALN&))((::PBYTE)hIl2Cpp + MIIABGMFFHL_LLCPLICBCCF_OFFSET))(this, AAOCANGHBDG);
	}
};
