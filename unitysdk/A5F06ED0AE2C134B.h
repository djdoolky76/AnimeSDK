#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Splines/CatmullRom/Spline.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define A5F06ED0AE2C134B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x269B560)
#define A5F06ED0AE2C134B__CTOR_OFFSET UNITYSDK_OFFSET(0x269B6C0)

inline static constexpr unsigned int A5F06ED0AE2C134B_TypeDefinitionIndex = 6525;

class A5F06ED0AE2C134B : public ::ABC::Splines::CatmullRom::Spline
{
public:
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A5F06ED0AE2C134B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A5F06ED0AE2C134B*&))((::PBYTE)hIl2Cpp + A5F06ED0AE2C134B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5F06ED0AE2C134B__CTOR_OFFSET))(this);
	}
};
