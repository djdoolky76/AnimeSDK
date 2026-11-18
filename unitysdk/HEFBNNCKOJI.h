#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HEFBNNCKOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x100FB5E0)

inline static constexpr unsigned int HEFBNNCKOJI_TypeDefinitionIndex = 79977;

class HEFBNNCKOJI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFBNNCKOJI__CTOR_OFFSET))(this);
	}
};
