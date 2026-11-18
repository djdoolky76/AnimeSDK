#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KBACCPJLOPG__CTOR_OFFSET UNITYSDK_OFFSET(0x152BD230)

inline static constexpr unsigned int KBACCPJLOPG_TypeDefinitionIndex = 80045;

class KBACCPJLOPG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACCPJLOPG__CTOR_OFFSET))(this);
	}
};
