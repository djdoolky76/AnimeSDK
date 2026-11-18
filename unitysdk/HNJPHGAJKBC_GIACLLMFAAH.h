#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNJPHGAJKBC_AJNJBGOLMIC.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"

class BLIDNEBFCLI;
class BNPHNIKEBAL;
class FCJHKNJNBEL;
class HNJPHGAJKBC;

#define HNJPHGAJKBC_GIACLLMFAAH_LMPPKKEFABK_OFFSET UNITYSDK_OFFSET(0x1FB11140)
#define HNJPHGAJKBC_GIACLLMFAAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB11130)

inline static constexpr unsigned int HNJPHGAJKBC_GIACLLMFAAH_TypeDefinitionIndex = 29084;

class HNJPHGAJKBC_GIACLLMFAAH : public ::System::Object
{
public:
	::HNJPHGAJKBC* KLHPEBKNIFB; // 0x10
	::BLIDNEBFCLI* KGFNDCDLDND; // 0x18
	::FCJHKNJNBEL* HEGEAOOAHFM; // 0x20
	::System::DateTimeOffset FLENKLHCIOI; // 0x28
	::System::Int32 NGOJGMCECJP; // 0x38
	::HNJPHGAJKBC_AJNJBGOLMIC ABBGEKKBMGI; // 0x3C
	::System::Int32 CPDCPKAMDLA; // 0x40
	::System::Int32 ELHPOJMLCEO; // 0x44
	::System::Int32 IKEPFIMDBLE; // 0x48
	::System::Int32 JJPDBFKDCPK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJPHGAJKBC_GIACLLMFAAH__CTOR_OFFSET))(this);
	}

	::System::Void LMPPKKEFABK(::BNPHNIKEBAL* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::BNPHNIKEBAL*))((::PBYTE)hIl2Cpp + HNJPHGAJKBC_GIACLLMFAAH_LMPPKKEFABK_OFFSET))(this, PIIPCLCCOIG);
	}
};
