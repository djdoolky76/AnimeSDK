#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHGPPFDALPA;

#define PJEJIAEDLFG_GEECNPOPPEH_PBKFEJKMKKF_OFFSET UNITYSDK_OFFSET(0x11983010)
#define PJEJIAEDLFG_GEECNPOPPEH__CTOR_OFFSET UNITYSDK_OFFSET(0x11983000)

inline static constexpr unsigned int PJEJIAEDLFG_GEECNPOPPEH_TypeDefinitionIndex = 45434;

class PJEJIAEDLFG_GEECNPOPPEH : public ::System::Object
{
public:
	::System::Int32 PDAEFBBHHPP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_GEECNPOPPEH__CTOR_OFFSET))(this);
	}

	::System::Boolean PBKFEJKMKKF(::DHGPPFDALPA* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::DHGPPFDALPA*))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_GEECNPOPPEH_PBKFEJKMKKF_OFFSET))(this, HAAEBCOBKFF);
	}
};
