#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define B9E16644D3057522_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26F1100)
#define B9E16644D3057522__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B9E16644D3057522_TypeDefinitionIndex = 2787;

class B9E16644D3057522 : public ::System::Object
{
public:
	::System::String* AF21E7B122675E30; // 0x10
	::System::Int32 A868737966B872AE; // 0x18
	::System::UInt32 F323C8DC632A222C; // 0x1C

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B9E16644D3057522*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B9E16644D3057522*&))((::PBYTE)hIl2Cpp + B9E16644D3057522_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9E16644D3057522__CTOR_OFFSET))(this);
	}
};
