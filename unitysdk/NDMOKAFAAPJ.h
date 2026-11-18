#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define NDMOKAFAAPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F6B900)

inline static constexpr unsigned int NDMOKAFAAPJ_TypeDefinitionIndex = 57351;

class NDMOKAFAAPJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMOKAFAAPJ__CTOR_OFFSET))(this);
	}
};
