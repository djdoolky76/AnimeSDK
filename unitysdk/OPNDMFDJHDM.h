#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

class NDDKGELLJPM;
class PMIIAABJCBA;

#define OPNDMFDJHDM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1A7D4F50)
#define OPNDMFDJHDM_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1A7D4EC0)
#define OPNDMFDJHDM_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x136EAC80)
#define OPNDMFDJHDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D4EB0)

inline static constexpr unsigned int OPNDMFDJHDM_TypeDefinitionIndex = 47773;

class OPNDMFDJHDM : public ::LICBHCFJLNF
{
public:
	::PMIIAABJCBA* OELJMDJDKIH; // 0x10
	::NDDKGELLJPM* DNNINFGNKBG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNDMFDJHDM__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNDMFDJHDM_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::OPNDMFDJHDM* BBPCBEEHALC()
	{
		return ((::OPNDMFDJHDM*(*)())((::PBYTE)hIl2Cpp + OPNDMFDJHDM_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNDMFDJHDM_ANEOCOIFDDJ_OFFSET))(this);
	}
};
