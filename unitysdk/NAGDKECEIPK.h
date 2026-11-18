#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define NAGDKECEIPK__CTOR_OFFSET UNITYSDK_OFFSET(0xE54DB00)

inline static constexpr unsigned int NAGDKECEIPK_TypeDefinitionIndex = 51520;

class NAGDKECEIPK : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGDKECEIPK__CTOR_OFFSET))(this);
	}
};
