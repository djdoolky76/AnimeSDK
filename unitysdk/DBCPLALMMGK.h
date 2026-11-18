#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBCPLALMMGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1689B3A0)

inline static constexpr unsigned int DBCPLALMMGK_TypeDefinitionIndex = 43192;

class DBCPLALMMGK : public ::System::Object
{
public:
	::System::Int32 BICJILKLGEF; // 0x10
	::System::Boolean NCHODCGOJLP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCPLALMMGK__CTOR_OFFSET))(this);
	}
};
