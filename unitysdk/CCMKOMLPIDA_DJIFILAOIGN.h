#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCMKOMLPIDA;
class KPPPFKOCCEF;

#define CCMKOMLPIDA_DJIFILAOIGN_JDBCAGPMOPN_OFFSET UNITYSDK_OFFSET(0x199F3CD0)
#define CCMKOMLPIDA_DJIFILAOIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x199F3CC0)

inline static constexpr unsigned int CCMKOMLPIDA_DJIFILAOIGN_TypeDefinitionIndex = 66039;

class CCMKOMLPIDA_DJIFILAOIGN : public ::System::Object
{
public:
	::CCMKOMLPIDA* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMKOMLPIDA_DJIFILAOIGN__CTOR_OFFSET))(this);
	}

	::KPPPFKOCCEF* JDBCAGPMOPN()
	{
		return ((::KPPPFKOCCEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMKOMLPIDA_DJIFILAOIGN_JDBCAGPMOPN_OFFSET))(this);
	}
};
