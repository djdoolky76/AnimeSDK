#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MNEHMICFPBG__CTOR_OFFSET UNITYSDK_OFFSET(0x151EC520)

inline static constexpr unsigned int MNEHMICFPBG_TypeDefinitionIndex = 57539;

class MNEHMICFPBG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEHMICFPBG__CTOR_OFFSET))(this);
	}
};
