#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKNNFBGADLF;

#define DKNNFBGADLF_AAJAPMIHNIB_FCHBLBBFENM_OFFSET UNITYSDK_OFFSET(0x19416C40)
#define DKNNFBGADLF_AAJAPMIHNIB_GHLBCELMCEE_OFFSET UNITYSDK_OFFSET(0x19416C50)
#define DKNNFBGADLF_AAJAPMIHNIB_HHDOKCAMEOK_OFFSET UNITYSDK_OFFSET(0x19416BC0)
#define DKNNFBGADLF_AAJAPMIHNIB__CTOR_OFFSET UNITYSDK_OFFSET(0x19416BB0)

inline static constexpr unsigned int DKNNFBGADLF_AAJAPMIHNIB_TypeDefinitionIndex = 87546;

class DKNNFBGADLF_AAJAPMIHNIB : public ::System::Object
{
public:
	::DKNNFBGADLF* KLHPEBKNIFB; // 0x10
	::System::Single IMLLDOHDCNC; // 0x18
	::System::Int32 PPELJIHKBBD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_AAJAPMIHNIB__CTOR_OFFSET))(this);
	}

	::System::Void HHDOKCAMEOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_AAJAPMIHNIB_HHDOKCAMEOK_OFFSET))(this);
	}

	::System::Single FCHBLBBFENM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_AAJAPMIHNIB_FCHBLBBFENM_OFFSET))(this);
	}

	::System::Void GHLBCELMCEE(::System::Single FOOBONOEPGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKNNFBGADLF_AAJAPMIHNIB_GHLBCELMCEE_OFFSET))(this, FOOBONOEPGD);
	}
};
