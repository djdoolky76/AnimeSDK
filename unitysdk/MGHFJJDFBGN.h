#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

class LIPOHGKLAJN;

#define MGHFJJDFBGN_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x14D80640)
#define MGHFJJDFBGN_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x14D805B0)
#define MGHFJJDFBGN_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x14D804D0)
#define MGHFJJDFBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14D805A0)

inline static constexpr unsigned int MGHFJJDFBGN_TypeDefinitionIndex = 62019;

class MGHFJJDFBGN : public ::KCIPADHDIIN
{
public:
	::LIPOHGKLAJN* OJGGJOJCLBG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHFJJDFBGN__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHFJJDFBGN_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::MGHFJJDFBGN* BBPCBEEHALC()
	{
		return ((::MGHFJJDFBGN*(*)())((::PBYTE)hIl2Cpp + MGHFJJDFBGN_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHFJJDFBGN_ANEOCOIFDDJ_OFFSET))(this);
	}
};
