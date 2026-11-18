#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

class PNAONLKLHNB;

#define CGHHIGIKABA_BKHBCJGCBEF_OFFSET UNITYSDK_OFFSET(0x19A014B0)
#define CGHHIGIKABA_HMIOPPLKBLN_OFFSET UNITYSDK_OFFSET(0x19A014A0)
#define CGHHIGIKABA__CTOR_OFFSET UNITYSDK_OFFSET(0x19A01490)

inline static constexpr unsigned int CGHHIGIKABA_TypeDefinitionIndex = 60234;

class CGHHIGIKABA : public ::JNAGFFCCOHI
{
public:
	::PNAONLKLHNB* _FAHIPPOPLIH_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHHIGIKABA__CTOR_OFFSET))(this);
	}

	::System::Void HMIOPPLKBLN(::PNAONLKLHNB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PNAONLKLHNB*))((::PBYTE)hIl2Cpp + CGHHIGIKABA_HMIOPPLKBLN_OFFSET))(this, EGEGIMGMJHN);
	}

	::PNAONLKLHNB* BKHBCJGCBEF()
	{
		return ((::PNAONLKLHNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHHIGIKABA_BKHBCJGCBEF_OFFSET))(this);
	}
};
