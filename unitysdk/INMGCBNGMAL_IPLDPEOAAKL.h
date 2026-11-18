#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABGMNCCINDG.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class INMGCBNGMAL;

#define INMGCBNGMAL_IPLDPEOAAKL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x13AB0C60)
#define INMGCBNGMAL_IPLDPEOAAKL__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB0C50)

inline static constexpr unsigned int INMGCBNGMAL_IPLDPEOAAKL_TypeDefinitionIndex = 40785;

class INMGCBNGMAL_IPLDPEOAAKL : public ::System::Object
{
public:
	::HOCDHMEPPEG GPELAKKMLBG; // 0x10
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x40
	::INMGCBNGMAL* KLHPEBKNIFB; // 0x70
	::ABGMNCCINDG PCHJFGPHEBG; // 0x78
	::System::Int32 LCNBDEOPDCM; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMGCBNGMAL_IPLDPEOAAKL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean DJCNCELJPOM, ::System::Int32 LDIPPLFDENP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + INMGCBNGMAL_IPLDPEOAAKL_LIDNPLMPHAL_OFFSET))(this, DJCNCELJPOM, LDIPPLFDENP);
	}
};
