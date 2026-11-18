#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

#define CNKMJCLBNMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BE440)

inline static constexpr unsigned int CNKMJCLBNMJ_TypeDefinitionIndex = 57361;

class CNKMJCLBNMJ : public ::OAOOLPCNHKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKMJCLBNMJ__CTOR_OFFSET))(this);
	}
};
