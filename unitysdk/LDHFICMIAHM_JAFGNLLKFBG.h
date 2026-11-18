#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPKCNCBNLGO;

#define LDHFICMIAHM_JAFGNLLKFBG_NINLHKMIHGC_OFFSET UNITYSDK_OFFSET(0x15181D80)
#define LDHFICMIAHM_JAFGNLLKFBG__CTOR_OFFSET UNITYSDK_OFFSET(0x15181D70)

inline static constexpr unsigned int LDHFICMIAHM_JAFGNLLKFBG_TypeDefinitionIndex = 73995;

class LDHFICMIAHM_JAFGNLLKFBG : public ::System::Object
{
public:
	::LPKCNCBNLGO* PJNFGDDJNGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHFICMIAHM_JAFGNLLKFBG__CTOR_OFFSET))(this);
	}

	::System::Boolean NINLHKMIHGC(::LPKCNCBNLGO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPKCNCBNLGO*))((::PBYTE)hIl2Cpp + LDHFICMIAHM_JAFGNLLKFBG_NINLHKMIHGC_OFFSET))(this, HAAEBCOBKFF);
	}
};
