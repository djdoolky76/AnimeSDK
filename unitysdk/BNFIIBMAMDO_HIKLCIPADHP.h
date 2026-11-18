#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPKCOBKIJPH;

#define BNFIIBMAMDO_HIKLCIPADHP_PLLLDFNGCDG_OFFSET UNITYSDK_OFFSET(0x16A01560)
#define BNFIIBMAMDO_HIKLCIPADHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A01550)

inline static constexpr unsigned int BNFIIBMAMDO_HIKLCIPADHP_TypeDefinitionIndex = 80860;

class BNFIIBMAMDO_HIKLCIPADHP : public ::System::Object
{
public:
	::System::Int32 DIEEDEBJCMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_HIKLCIPADHP__CTOR_OFFSET))(this);
	}

	::System::Boolean PLLLDFNGCDG(::EPKCOBKIJPH* DLJPLHKELCO)
	{
		return ((::System::Boolean(*)(::PVOID, ::EPKCOBKIJPH*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_HIKLCIPADHP_PLLLDFNGCDG_OFFSET))(this, DLJPLHKELCO);
	}
};
