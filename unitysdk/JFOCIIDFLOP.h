#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JFOCIIDFLOP_NHFMNNGBPFF_OFFSET UNITYSDK_OFFSET(0x6F9C00)
#define JFOCIIDFLOP__CTOR_OFFSET UNITYSDK_OFFSET(0x6F9BF0)

inline static constexpr unsigned int JFOCIIDFLOP_TypeDefinitionIndex = 49784;

struct alignas(4) JFOCIIDFLOP
{
	::System::Single KEIFOGPJOPA; // 0x10
	::System::Boolean CINNIIAOLFJ; // 0x14

	::System::Void _ctor(::System::Single OGEHGGPLAHL, ::System::Boolean IKBKMHCGOAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JFOCIIDFLOP__CTOR_OFFSET))(this, OGEHGGPLAHL, IKBKMHCGOAN);
	}

	::System::Void NHFMNNGBPFF(::System::Single IMLLDOHDCNC, ::System::Single CIIPCCLOHLH, ::System::Single EODDDEDPMHA, ::System::Single& DNNOFOACEDB, ::System::Single& IJJJJELADMA, ::System::Single& KGHNBNOMMJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + JFOCIIDFLOP_NHFMNNGBPFF_OFFSET))(this, IMLLDOHDCNC, CIIPCCLOHLH, EODDDEDPMHA, DNNOFOACEDB, IJJJJELADMA, KGHNBNOMMJI);
	}
};
