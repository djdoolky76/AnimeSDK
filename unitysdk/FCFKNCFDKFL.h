#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEMGKAKOLMB.h"

#define FCFKNCFDKFL__CTOR_OFFSET UNITYSDK_OFFSET(0x131FF170)

inline static constexpr unsigned int FCFKNCFDKFL_TypeDefinitionIndex = 87703;

class FCFKNCFDKFL : public ::NEMGKAKOLMB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKNCFDKFL__CTOR_OFFSET))(this);
	}
};
