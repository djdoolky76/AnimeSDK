#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KHMDAKIGBJN__CTOR_OFFSET UNITYSDK_OFFSET(0x18629FB0)

inline static constexpr unsigned int KHMDAKIGBJN_TypeDefinitionIndex = 86129;

class KHMDAKIGBJN : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMDAKIGBJN__CTOR_OFFSET))(this);
	}
};
