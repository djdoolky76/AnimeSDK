#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define B2056DB406ABE865_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1F9E2A0)
#define B2056DB406ABE865__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B2056DB406ABE865_TypeDefinitionIndex = 5845;

class B2056DB406ABE865 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2056DB406ABE865__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B2056DB406ABE865*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B2056DB406ABE865*&))((::PBYTE)hIl2Cpp + B2056DB406ABE865_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
