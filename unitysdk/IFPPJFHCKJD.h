#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJJBBOIFFPC.h"

#define IFPPJFHCKJD_GMPAEJJAJAH_OFFSET UNITYSDK_OFFSET(0x1A463160)
#define IFPPJFHCKJD_JNABFFDGEDM_OFFSET UNITYSDK_OFFSET(0x1A463060)
#define IFPPJFHCKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A463260)

inline static constexpr unsigned int IFPPJFHCKJD_TypeDefinitionIndex = 57657;

class IFPPJFHCKJD : public ::MJJBBOIFFPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPPJFHCKJD__CTOR_OFFSET))(this);
	}

	::System::Single JNABFFDGEDM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPPJFHCKJD_JNABFFDGEDM_OFFSET))(this);
	}

	::System::Single GMPAEJJAJAH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPPJFHCKJD_GMPAEJJAJAH_OFFSET))(this);
	}
};
