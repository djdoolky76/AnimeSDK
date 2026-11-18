#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDBDJENIDEO.h"

#define BKABONPELIB__CTOR_OFFSET UNITYSDK_OFFSET(0x10E09380)

inline static constexpr unsigned int BKABONPELIB_TypeDefinitionIndex = 83360;

class BKABONPELIB : public ::EDBDJENIDEO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKABONPELIB__CTOR_OFFSET))(this);
	}
};
