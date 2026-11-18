#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KIKIMCOJBBK_DHOGONIMNBM_OFFSET UNITYSDK_OFFSET(0x15161260)
#define KIKIMCOJBBK_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x151610A0)
#define KIKIMCOJBBK_HIMNGIBCEHG_OFFSET UNITYSDK_OFFSET(0x15161030)
#define KIKIMCOJBBK_ICMDKCJKMJH_OFFSET UNITYSDK_OFFSET(0x15161150)
#define KIKIMCOJBBK_JAMPNPKABDP_OFFSET UNITYSDK_OFFSET(0x151610F0)
#define KIKIMCOJBBK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15160FE0)
#define KIKIMCOJBBK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x151611E0)
#define KIKIMCOJBBK_PPNLCJMGFJO_OFFSET UNITYSDK_OFFSET(0x15161270)
#define KIKIMCOJBBK__CTOR_OFFSET UNITYSDK_OFFSET(0x15160F90)

inline static constexpr unsigned int KIKIMCOJBBK_TypeDefinitionIndex = 54455;

class KIKIMCOJBBK : public ::System::Object
{
public:
	::System::Single CCEMGJAFKCP; // 0x10
	::System::Single EEODALLOKMF; // 0x14
	::System::Single IGLKELDBGOO; // 0x18
	::System::Boolean HPINBCPMHJE; // 0x1C
	::System::Boolean CGFLLPOCDJM; // 0x1D
	::System::Boolean IFMGLGDBPOO; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIMCOJBBK__CTOR_OFFSET))(this);
	}

	::System::Void HIMNGIBCEHG(::System::Single IGLKELDBGOO, ::System::Single LPNIFIHGNFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_HIMNGIBCEHG_OFFSET))(this, IGLKELDBGOO, LPNIFIHGNFD);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Boolean JAMPNPKABDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_JAMPNPKABDP_OFFSET))(this);
	}

	::System::Void ICMDKCJKMJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_ICMDKCJKMJH_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Single DHOGONIMNBM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_DHOGONIMNBM_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean PPNLCJMGFJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIMCOJBBK_PPNLCJMGFJO_OFFSET))(this);
	}
};
