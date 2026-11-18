#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FGHCKKKFHHE_JMDGOFOPFEH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x725A10)

inline static constexpr unsigned int FGHCKKKFHHE_JMDGOFOPFEH_TypeDefinitionIndex = 52115;

struct alignas(4) FGHCKKKFHHE_JMDGOFOPFEH
{
	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_JMDGOFOPFEH_EXECUTE_OFFSET))(this);
	}
};
