#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBMMKDOEHDB.h"

#define KGGNNPHAHCO__CTOR_OFFSET UNITYSDK_OFFSET(0x168021E0)

inline static constexpr unsigned int KGGNNPHAHCO_TypeDefinitionIndex = 68813;

class KGGNNPHAHCO : public ::CBMMKDOEHDB
{
public:
	::System::Void _ctor(::CBMMKDOEHDB* FFKBEGIHIGG)
	{
		return ((::System::Void(*)(::PVOID, ::CBMMKDOEHDB*))((::PBYTE)hIl2Cpp + KGGNNPHAHCO__CTOR_OFFSET))(this, FFKBEGIHIGG);
	}
};
