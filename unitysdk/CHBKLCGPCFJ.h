#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;

#define CHBKLCGPCFJ_DGKCHLBENFH_OFFSET UNITYSDK_OFFSET(0x19A01AC0)
#define CHBKLCGPCFJ_JAFGCONGEKF_OFFSET UNITYSDK_OFFSET(0x19A01980)
#define CHBKLCGPCFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19A01AB0)

inline static constexpr unsigned int CHBKLCGPCFJ_TypeDefinitionIndex = 54304;

class CHBKLCGPCFJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBKLCGPCFJ__CTOR_OFFSET))(this);
	}

	::System::Void JAFGCONGEKF(::FMHDMLBDIJC* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + CHBKLCGPCFJ_JAFGCONGEKF_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Boolean DGKCHLBENFH(::FMHDMLBDIJC* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + CHBKLCGPCFJ_DGKCHLBENFH_OFFSET))(this, HODAIDNDKHD);
	}
};
