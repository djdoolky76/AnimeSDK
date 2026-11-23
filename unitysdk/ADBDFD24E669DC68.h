#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBBF88E07D9EE9CB.h"

class E7E121B42610183A;

#define ADBDFD24E669DC68_F598113B2CAA3BC5_OFFSET UNITYSDK_OFFSET(0x21AC4B0)
#define ADBDFD24E669DC68__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ADBDFD24E669DC68_TypeDefinitionIndex = 8824;

class ADBDFD24E669DC68 : public ::EBBF88E07D9EE9CB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBDFD24E669DC68__CTOR_OFFSET))(this);
	}

	::System::Void F598113B2CAA3BC5(::E7E121B42610183A* B2DE4C333F68A7C8)
	{
		return ((::System::Void(*)(::PVOID, ::E7E121B42610183A*))((::PBYTE)hIl2Cpp + ADBDFD24E669DC68_F598113B2CAA3BC5_OFFSET))(this, B2DE4C333F68A7C8);
	}
};
