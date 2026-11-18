#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHPOOFFAFI.h"

#define KMFHILCPMHJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A2D2060)
#define KMFHILCPMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D2050)

inline static constexpr unsigned int KMFHILCPMHJ_TypeDefinitionIndex = 64328;

class KMFHILCPMHJ : public ::PBHPOOFFAFI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHILCPMHJ__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 PAEEEHKILOC, ::System::Int32 LHHIIDPIJJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KMFHILCPMHJ_BBOMJDBNHIC_OFFSET))(this, PAEEEHKILOC, LHHIIDPIJJB);
	}
};
