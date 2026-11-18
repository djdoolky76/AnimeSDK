#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;

#define HDOPLLGEAHH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x771350)
#define HDOPLLGEAHH_DGPKBHOHGPI_OFFSET UNITYSDK_OFFSET(0x771340)
#define HDOPLLGEAHH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7713B0)

inline static constexpr unsigned int HDOPLLGEAHH_TypeDefinitionIndex = 74109;

struct alignas(8) HDOPLLGEAHH
{
	::EHKKPCGAJHO* ECPCBKGAGEI; // 0x10
	::AEMCAOEICDG* KLJOOPEMDPM; // 0x18

	::System::Void DGPKBHOHGPI(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDOPLLGEAHH_DGPKBHOHGPI_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Void BBOMJDBNHIC(::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::EHKKPCGAJHO*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + HDOPLLGEAHH_BBOMJDBNHIC_OFFSET))(this, POBADKEDFOE, OHPJHPEOFLD);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOPLLGEAHH_NPOLNFDBOOD_OFFSET))(this);
	}
};
