#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMDLEABINEN.h"

#define LJMENIAEFJO__CTOR_OFFSET UNITYSDK_OFFSET(0xD435940)

inline static constexpr unsigned int LJMENIAEFJO_TypeDefinitionIndex = 42280;

class LJMENIAEFJO : public ::FMDLEABINEN
{
public:
	::System::Int32 ENNLOKAPGNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMENIAEFJO__CTOR_OFFSET))(this);
	}
};
