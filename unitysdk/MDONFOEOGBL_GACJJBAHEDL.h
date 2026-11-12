#pragma once
#include "unitysdk/unitysdk.h"

#define MDONFOEOGBL_GACJJBAHEDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20D70)

inline static constexpr unsigned int MDONFOEOGBL_GACJJBAHEDL_TypeDefinitionIndex = 76179;

	struct alignas(4) MDONFOEOGBL_GACJJBAHEDL
	{
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDONFOEOGBL_GACJJBAHEDL_DISPOSE_OFFSET))(this);
		}

	};
