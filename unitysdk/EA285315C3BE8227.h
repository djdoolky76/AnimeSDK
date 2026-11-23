#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define EA285315C3BE8227_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25EF390)
#define EA285315C3BE8227__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EA285315C3BE8227_TypeDefinitionIndex = 5750;

class EA285315C3BE8227 : public ::System::Object
{
public:
	::System::Int32 E2A819DEAB12D5C5; // 0x10
	::System::Int32 A321CBC86C4EC712; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA285315C3BE8227__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EA285315C3BE8227*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EA285315C3BE8227*&))((::PBYTE)hIl2Cpp + EA285315C3BE8227_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
