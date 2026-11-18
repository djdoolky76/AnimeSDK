#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCNGDMKEFIB.h"

class FCPBOMMIHCE;
class LGINJIKKBJA;

#define GMLFANOLPIJ_IIEIDLJBFMJ_OFFSET UNITYSDK_OFFSET(0x14913660)
#define GMLFANOLPIJ_JHGJIFKPJHO_OFFSET UNITYSDK_OFFSET(0x14913650)
#define GMLFANOLPIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x149135C0)

inline static constexpr unsigned int GMLFANOLPIJ_TypeDefinitionIndex = 71432;

class GMLFANOLPIJ : public ::DCNGDMKEFIB
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::FCPBOMMIHCE* _MDKDJHDHEPJ_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLFANOLPIJ__CTOR_OFFSET))(this);
	}

	::System::Void JHGJIFKPJHO(::FCPBOMMIHCE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FCPBOMMIHCE*))((::PBYTE)hIl2Cpp + GMLFANOLPIJ_JHGJIFKPJHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::FCPBOMMIHCE* IIEIDLJBFMJ()
	{
		return ((::FCPBOMMIHCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLFANOLPIJ_IIEIDLJBFMJ_OFFSET))(this);
	}
};
