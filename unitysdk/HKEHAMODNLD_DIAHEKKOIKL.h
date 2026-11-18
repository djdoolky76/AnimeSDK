#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNPFJKPGEHF;

#define HKEHAMODNLD_DIAHEKKOIKL_FDLOGHLJHNI_OFFSET UNITYSDK_OFFSET(0x149539E0)
#define HKEHAMODNLD_DIAHEKKOIKL__CTOR_OFFSET UNITYSDK_OFFSET(0x149539D0)

inline static constexpr unsigned int HKEHAMODNLD_DIAHEKKOIKL_TypeDefinitionIndex = 51865;

class HKEHAMODNLD_DIAHEKKOIKL : public ::System::Object
{
public:
	::System::Int32 OPNJBIKDJBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEHAMODNLD_DIAHEKKOIKL__CTOR_OFFSET))(this);
	}

	::System::Void FDLOGHLJHNI(::PNPFJKPGEHF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + HKEHAMODNLD_DIAHEKKOIKL_FDLOGHLJHNI_OFFSET))(this, GLAOEHCGCFO);
	}
};
