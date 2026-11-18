#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJCJMHMHBFL;
class KDAMKPJPCME;

#define EJCJMHMHBFL_FNFCJEJDAMH_MCOJMOMJBEL_OFFSET UNITYSDK_OFFSET(0x1EA149E0)
#define EJCJMHMHBFL_FNFCJEJDAMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA149D0)

inline static constexpr unsigned int EJCJMHMHBFL_FNFCJEJDAMH_TypeDefinitionIndex = 94874;

class EJCJMHMHBFL_FNFCJEJDAMH : public ::System::Object
{
public:
	::EJCJMHMHBFL* KLHPEBKNIFB; // 0x10
	::System::Single PMNLNNGEIFM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCJMHMHBFL_FNFCJEJDAMH__CTOR_OFFSET))(this);
	}

	::System::Void MCOJMOMJBEL(::KDAMKPJPCME* JFGLIJKDCDE)
	{
		return ((::System::Void(*)(::PVOID, ::KDAMKPJPCME*))((::PBYTE)hIl2Cpp + EJCJMHMHBFL_FNFCJEJDAMH_MCOJMOMJBEL_OFFSET))(this, JFGLIJKDCDE);
	}
};
