#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNLHFLFKGMP.h"
#include "unitysdk/MJGFEONIPPB.h"

#define KLKFJBCMLBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F01A310)

inline static constexpr unsigned int KLKFJBCMLBC_TypeDefinitionIndex = 36065;

class KLKFJBCMLBC : public ::KNLHFLFKGMP
{
public:
	::MJGFEONIPPB OCOJFKMOKMK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKFJBCMLBC__CTOR_OFFSET))(this);
	}
};
