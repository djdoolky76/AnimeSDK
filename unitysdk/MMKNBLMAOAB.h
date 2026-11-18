#pragma once
#include "unitysdk/unitysdk.h"

class HGPOKHNKMIP;
class PIHMAKEPOGO;

#define MMKNBLMAOAB_CPGLMEEKEFN_OFFSET UNITYSDK_OFFSET(0x1A69EB00)
#define MMKNBLMAOAB_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x1A69EA30)
#define MMKNBLMAOAB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1A69EA70)
#define MMKNBLMAOAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69EAB0)

inline static constexpr unsigned int MMKNBLMAOAB_TypeDefinitionIndex = 75680;

class MMKNBLMAOAB
{
public:
	::PIHMAKEPOGO* NILPOBDPPNL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKNBLMAOAB__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKNBLMAOAB_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKNBLMAOAB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void CPGLMEEKEFN(::HGPOKHNKMIP* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HGPOKHNKMIP*))((::PBYTE)hIl2Cpp + MMKNBLMAOAB_CPGLMEEKEFN_OFFSET))(this, NKMKJFCBBCK);
	}
};
