#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define FAKADKFKIGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7A610)

inline static constexpr unsigned int FAKADKFKIGD_TypeDefinitionIndex = 93991;

class FAKADKFKIGD : public ::BIHPBFHEOOA
{
public:
	::System::Boolean FBILHHBPEHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKADKFKIGD__CTOR_OFFSET))(this);
	}
};
