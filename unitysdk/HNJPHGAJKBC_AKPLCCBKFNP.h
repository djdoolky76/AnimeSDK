#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLIDNEBFCLI;
class BNPHNIKEBAL;
class FCJHKNJNBEL;

#define HNJPHGAJKBC_AKPLCCBKFNP_HMDFDDCKHKN_OFFSET UNITYSDK_OFFSET(0x1FD0A710)
#define HNJPHGAJKBC_AKPLCCBKFNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0A700)

inline static constexpr unsigned int HNJPHGAJKBC_AKPLCCBKFNP_TypeDefinitionIndex = 29083;

class HNJPHGAJKBC_AKPLCCBKFNP : public ::System::Object
{
public:
	::BLIDNEBFCLI* KGFNDCDLDND; // 0x10
	::FCJHKNJNBEL* HEGEAOOAHFM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJPHGAJKBC_AKPLCCBKFNP__CTOR_OFFSET))(this);
	}

	::System::Void HMDFDDCKHKN(::BNPHNIKEBAL* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::BNPHNIKEBAL*))((::PBYTE)hIl2Cpp + HNJPHGAJKBC_AKPLCCBKFNP_HMDFDDCKHKN_OFFSET))(this, PIIPCLCCOIG);
	}
};
