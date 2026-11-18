#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define NCBLCOHCHHG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x120F3180)
#define NCBLCOHCHHG_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x120F30F0)
#define NCBLCOHCHHG_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x120F3010)
#define NCBLCOHCHHG__CTOR_OFFSET UNITYSDK_OFFSET(0x120F30E0)

inline static constexpr unsigned int NCBLCOHCHHG_TypeDefinitionIndex = 50279;

class NCBLCOHCHHG : public ::KCIPADHDIIN
{
public:
	::System::UInt32 MNAIIBHLHMA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLCOHCHHG__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLCOHCHHG_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::NCBLCOHCHHG* BBPCBEEHALC()
	{
		return ((::NCBLCOHCHHG*(*)())((::PBYTE)hIl2Cpp + NCBLCOHCHHG_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLCOHCHHG_ANEOCOIFDDJ_OFFSET))(this);
	}
};
