#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define F90AC61E7CFBA2C0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23871F0)
#define F90AC61E7CFBA2C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F90AC61E7CFBA2C0_TypeDefinitionIndex = 3425;

class F90AC61E7CFBA2C0 : public ::System::Object
{
public:
	::System::String* B823BD107ED98484; // 0x10
	::System::Int32 F86200E8FC581107; // 0x18
	::System::Byte _padding0[0x4];
	::System::UInt64 EA472963826998D7; // 0x20
	::System::UInt64 B2BE6A1BFD853B59; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F90AC61E7CFBA2C0__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F90AC61E7CFBA2C0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F90AC61E7CFBA2C0*&))((::PBYTE)hIl2Cpp + F90AC61E7CFBA2C0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
