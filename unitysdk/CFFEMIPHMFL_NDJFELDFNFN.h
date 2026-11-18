#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABGMNCCINDG.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class CFFEMIPHMFL;

#define CFFEMIPHMFL_NDJFELDFNFN_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x10E35150)
#define CFFEMIPHMFL_NDJFELDFNFN__CTOR_OFFSET UNITYSDK_OFFSET(0x10E35140)

inline static constexpr unsigned int CFFEMIPHMFL_NDJFELDFNFN_TypeDefinitionIndex = 38517;

class CFFEMIPHMFL_NDJFELDFNFN : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10
	::ABGMNCCINDG PCHJFGPHEBG; // 0x40
	::HOCDHMEPPEG GPELAKKMLBG; // 0x68
	::CFFEMIPHMFL* KLHPEBKNIFB; // 0x98
	::System::Int32 LCNBDEOPDCM; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFEMIPHMFL_NDJFELDFNFN__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean DJCNCELJPOM, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CFFEMIPHMFL_NDJFELDFNFN_LIDNPLMPHAL_OFFSET))(this, DJCNCELJPOM, EGEGIMGMJHN);
	}
};
