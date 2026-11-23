#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B2740D01B8346DE7_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define B2740D01B8346DE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

inline static constexpr unsigned int B2740D01B8346DE7_TypeDefinitionIndex = 19026;

class B2740D01B8346DE7 : public ::System::Object
{
public:
	::System::Int32 F9235B3FBDFB8502; // 0x10

	::System::Int32 BA0AFB830600D2A9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B2740D01B8346DE7_BA0AFB830600D2A9_OFFSET))(this);
	}

	::System::Void _ctor(::System::Int32 F9235B3FBDFB8502)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B2740D01B8346DE7__CTOR_OFFSET))(this, F9235B3FBDFB8502);
	}
};
