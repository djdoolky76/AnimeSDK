#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KHOEKJLAIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1862A030)

inline static constexpr unsigned int KHOEKJLAIEJ_TypeDefinitionIndex = 58392;

class KHOEKJLAIEJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOEKJLAIEJ__CTOR_OFFSET))(this);
	}
};
