#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define FA5B9FA557D79488_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x244D6A0)
#define FA5B9FA557D79488__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA5B9FA557D79488_TypeDefinitionIndex = 2471;

class FA5B9FA557D79488 : public ::System::Object
{
public:
	::System::String* B1EE8EF3AC123F69; // 0x10
	::System::Single B37DF5FE45EC385E; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA5B9FA557D79488__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FA5B9FA557D79488*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FA5B9FA557D79488*&))((::PBYTE)hIl2Cpp + FA5B9FA557D79488_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
