#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDIEJHMLKAK.h"

#define MNPIBODAMIH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18B5BE20)
#define MNPIBODAMIH_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x18B5BED0)
#define MNPIBODAMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5BDD0)

inline static constexpr unsigned int MNPIBODAMIH_TypeDefinitionIndex = 57513;

class MNPIBODAMIH : public ::MDIEJHMLKAK
{
public:
	::System::Void _ctor(::System::Double CIIPCCLOHLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MNPIBODAMIH__CTOR_OFFSET))(this, CIIPCCLOHLH);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPIBODAMIH_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void MOAIMMNOFJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPIBODAMIH_MOAIMMNOFJF_OFFSET))(this);
	}
};
