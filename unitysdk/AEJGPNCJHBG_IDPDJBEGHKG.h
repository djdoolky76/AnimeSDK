#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;

#define AEJGPNCJHBG_IDPDJBEGHKG_GEKEHEJJOCG_OFFSET UNITYSDK_OFFSET(0x134AD820)
#define AEJGPNCJHBG_IDPDJBEGHKG__CTOR_OFFSET UNITYSDK_OFFSET(0x134AD810)

inline static constexpr unsigned int AEJGPNCJHBG_IDPDJBEGHKG_TypeDefinitionIndex = 75485;

class AEJGPNCJHBG_IDPDJBEGHKG : public ::System::Object
{
public:
	::System::UInt32 OIKFFGKDHME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_IDPDJBEGHKG__CTOR_OFFSET))(this);
	}

	::System::Boolean GEKEHEJJOCG(::PNIHGNDLMIN* KOEDLMILGBL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_IDPDJBEGHKG_GEKEHEJJOCG_OFFSET))(this, KOEDLMILGBL);
	}
};
