#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIOGJMEIEI;

#define MGJLJHECMFL_CHDAHHHKMCH_GFKIPOKJAII_OFFSET UNITYSDK_OFFSET(0x15E2DA10)
#define MGJLJHECMFL_CHDAHHHKMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2DA00)

inline static constexpr unsigned int MGJLJHECMFL_CHDAHHHKMCH_TypeDefinitionIndex = 80065;

class MGJLJHECMFL_CHDAHHHKMCH : public ::System::Object
{
public:
	::System::Int32 ODLLCNGPBAA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_CHDAHHHKMCH__CTOR_OFFSET))(this);
	}

	::System::Boolean GFKIPOKJAII(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_CHDAHHHKMCH_GFKIPOKJAII_OFFSET))(this, BDHOILPIGKB);
	}
};
