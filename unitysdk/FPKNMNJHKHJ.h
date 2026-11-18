#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFMHODALAIN.h"

#define FPKNMNJHKHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x125BA0F0)

inline static constexpr unsigned int FPKNMNJHKHJ_TypeDefinitionIndex = 77424;

class FPKNMNJHKHJ : public ::GFMHODALAIN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKNMNJHKHJ__CTOR_OFFSET))(this);
	}
};
