#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECEOBOHAGOB.h"

#define PBBCDDEKJDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AABC0)

inline static constexpr unsigned int PBBCDDEKJDP_TypeDefinitionIndex = 9285;

class PBBCDDEKJDP : public ::ECEOBOHAGOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBCDDEKJDP__CTOR_OFFSET))(this);
	}
};
