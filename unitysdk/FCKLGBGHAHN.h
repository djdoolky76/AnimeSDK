#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCKLGBGHAHN_EBCPDBPFFLC_OFFSET UNITYSDK_OFFSET(0x1F3082F0)
#define FCKLGBGHAHN_ECCEEDCKEBL_OFFSET UNITYSDK_OFFSET(0x1F307F40)
#define FCKLGBGHAHN_FAKPMICPIFI_OFFSET UNITYSDK_OFFSET(0x1F307EF0)
#define FCKLGBGHAHN_HGAFELGFLKP_OFFSET UNITYSDK_OFFSET(0x1F308300)
#define FCKLGBGHAHN_HOCALPBLDFA_OFFSET UNITYSDK_OFFSET(0x1F307FA0)
#define FCKLGBGHAHN_KDFHDBFILIK_OFFSET UNITYSDK_OFFSET(0x1F308070)
#define FCKLGBGHAHN_KMBFCJNMPGE_OFFSET UNITYSDK_OFFSET(0x1F308440)
#define FCKLGBGHAHN_LPEHIAGGJMP_OFFSET UNITYSDK_OFFSET(0x1F308310)
#define FCKLGBGHAHN_MNFDNAFOBBN_OFFSET UNITYSDK_OFFSET(0x1F308120)
#define FCKLGBGHAHN_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x1F3082E0)
#define FCKLGBGHAHN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1F3080C0)
#define FCKLGBGHAHN_PMMANFMACFE_OFFSET UNITYSDK_OFFSET(0x1F3081B0)
#define FCKLGBGHAHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F307EB0)

inline static constexpr unsigned int FCKLGBGHAHN_TypeDefinitionIndex = 28777;

class FCKLGBGHAHN : public ::System::Object
{
public:
	::System::Single LDDJOFHAOHG; // 0x10
	::System::Single KBPLMDAFOEF; // 0x14

	::System::Void _ctor(::System::Single KBPLMDAFOEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCKLGBGHAHN__CTOR_OFFSET))(this, KBPLMDAFOEF);
	}

	::System::Boolean FAKPMICPIFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_FAKPMICPIFI_OFFSET))(this);
	}

	::System::Boolean ECCEEDCKEBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_ECCEEDCKEBL_OFFSET))(this);
	}

	::System::Boolean HOCALPBLDFA(::System::Single HBEKKMCBGBK, ::System::Boolean LLCJDKCFPCF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_HOCALPBLDFA_OFFSET))(this, HBEKKMCBGBK, LLCJDKCFPCF);
	}

	::System::Void NPOLNFDBOOD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_NPOLNFDBOOD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MNFDNAFOBBN(::System::Single KBPLMDAFOEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_MNFDNAFOBBN_OFFSET))(this, KBPLMDAFOEF);
	}

	::System::Single PMMANFMACFE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_PMMANFMACFE_OFFSET))(this);
	}

	::System::Single NCNOMFOCLBH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_NCNOMFOCLBH_OFFSET))(this);
	}

	::System::Single EBCPDBPFFLC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_EBCPDBPFFLC_OFFSET))(this);
	}

	::System::Boolean KDFHDBFILIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_KDFHDBFILIK_OFFSET))(this);
	}

	::System::Single HGAFELGFLKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_HGAFELGFLKP_OFFSET))(this);
	}

	::System::Single LPEHIAGGJMP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_LPEHIAGGJMP_OFFSET))(this);
	}

	::System::Void KMBFCJNMPGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLGBGHAHN_KMBFCJNMPGE_OFFSET))(this);
	}
};
