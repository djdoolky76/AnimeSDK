#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LMLAMMMCDPO__CTOR_OFFSET UNITYSDK_OFFSET(0x15900770)

inline static constexpr unsigned int LMLAMMMCDPO_TypeDefinitionIndex = 90555;

class LMLAMMMCDPO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLAMMMCDPO__CTOR_OFFSET))(this);
	}
};
