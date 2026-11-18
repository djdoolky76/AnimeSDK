#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABGMNCCINDG.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class CHMBLFGIFBO;

#define CHMBLFGIFBO_BNJFKOODANL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x153347F0)
#define CHMBLFGIFBO_BNJFKOODANL__CTOR_OFFSET UNITYSDK_OFFSET(0x153347E0)

inline static constexpr unsigned int CHMBLFGIFBO_BNJFKOODANL_TypeDefinitionIndex = 80167;

class CHMBLFGIFBO_BNJFKOODANL : public ::System::Object
{
public:
	::CHMBLFGIFBO* KLHPEBKNIFB; // 0x10
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x18
	::HOCDHMEPPEG GPELAKKMLBG; // 0x48
	::ABGMNCCINDG PCHJFGPHEBG; // 0x78
	::System::Int32 LCNBDEOPDCM; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMBLFGIFBO_BNJFKOODANL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::ValueTuple_2<::System::Boolean, ::System::Int32> IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::System::Int32>))((::PBYTE)hIl2Cpp + CHMBLFGIFBO_BNJFKOODANL_LIDNPLMPHAL_OFFSET))(this, IGAAKDOIPNN);
	}
};
