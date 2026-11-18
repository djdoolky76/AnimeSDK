#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DMNDDKFOKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x16BBFBF0)

inline static constexpr unsigned int DMNDDKFOKGI_TypeDefinitionIndex = 68819;

class DMNDDKFOKGI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNDDKFOKGI__CTOR_OFFSET))(this);
	}
};
