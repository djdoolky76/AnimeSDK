#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define BFE6B1A89AD5068C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1F9E2A0)
#define BFE6B1A89AD5068C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFE6B1A89AD5068C_TypeDefinitionIndex = 2770;

class BFE6B1A89AD5068C : public ::System::Object
{
public:
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BFE6B1A89AD5068C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BFE6B1A89AD5068C*&))((::PBYTE)hIl2Cpp + BFE6B1A89AD5068C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFE6B1A89AD5068C__CTOR_OFFSET))(this);
	}
};
