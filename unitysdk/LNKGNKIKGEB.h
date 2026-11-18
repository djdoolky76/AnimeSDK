#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOKHEOLGDNG.h"

class ALMMGOFACDF;

#define LNKGNKIKGEB_FCCCHKDGNFK_OFFSET UNITYSDK_OFFSET(0x151AE1D0)
#define LNKGNKIKGEB_MIAHEJBKPKC_OFFSET UNITYSDK_OFFSET(0x151AE170)
#define LNKGNKIKGEB_PFMKOADPLOJ_OFFSET UNITYSDK_OFFSET(0x151AE060)

inline static constexpr unsigned int LNKGNKIKGEB_TypeDefinitionIndex = 91267;

class LNKGNKIKGEB : public ::System::Object
{
public:
	static ::System::Single PFMKOADPLOJ(::NOKHEOLGDNG& HBNBIBADGNH)
	{
		return ((::System::Single(*)(::NOKHEOLGDNG&))((::PBYTE)hIl2Cpp + LNKGNKIKGEB_PFMKOADPLOJ_OFFSET))(HBNBIBADGNH);
	}

	static ::ALMMGOFACDF* MIAHEJBKPKC(::NOKHEOLGDNG& HBNBIBADGNH)
	{
		return ((::ALMMGOFACDF*(*)(::NOKHEOLGDNG&))((::PBYTE)hIl2Cpp + LNKGNKIKGEB_MIAHEJBKPKC_OFFSET))(HBNBIBADGNH);
	}

	static ::System::Single FCCCHKDGNFK(::NOKHEOLGDNG& HBNBIBADGNH)
	{
		return ((::System::Single(*)(::NOKHEOLGDNG&))((::PBYTE)hIl2Cpp + LNKGNKIKGEB_FCCCHKDGNFK_OFFSET))(HBNBIBADGNH);
	}
};
