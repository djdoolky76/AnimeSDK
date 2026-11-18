#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHFAEGHDFGC;
class CEACIPJGIEH;
class ODGJLEDJBJI_HNANBHEPNHF;

#define ODGJLEDJBJI_KNAPBGFMCKL_CJKHAJMCMLM_OFFSET UNITYSDK_OFFSET(0x16BFCE00)
#define ODGJLEDJBJI_KNAPBGFMCKL__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFCDF0)

inline static constexpr unsigned int ODGJLEDJBJI_KNAPBGFMCKL_TypeDefinitionIndex = 73480;

class ODGJLEDJBJI_KNAPBGFMCKL : public ::System::Object
{
public:
	::CEACIPJGIEH* BIHLHEBPMKI; // 0x10
	::ODGJLEDJBJI_HNANBHEPNHF* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_KNAPBGFMCKL__CTOR_OFFSET))(this);
	}

	::System::Void CJKHAJMCMLM(::BHFAEGHDFGC* PBIOMLBNCGM)
	{
		return ((::System::Void(*)(::PVOID, ::BHFAEGHDFGC*))((::PBYTE)hIl2Cpp + ODGJLEDJBJI_KNAPBGFMCKL_CJKHAJMCMLM_OFFSET))(this, PBIOMLBNCGM);
	}
};
