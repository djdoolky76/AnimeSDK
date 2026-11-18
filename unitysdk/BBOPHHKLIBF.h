#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBOPHHKLIBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1423D8A0)

inline static constexpr unsigned int BBOPHHKLIBF_TypeDefinitionIndex = 85759;

class BBOPHHKLIBF : public ::System::Object
{
public:
	::System::Int32 INJBEOPCFLF; // 0x10
	::System::Boolean KCBDGFHGNJN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOPHHKLIBF__CTOR_OFFSET))(this);
	}
};
