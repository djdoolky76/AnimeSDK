#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define F30ADEECA06FAC2E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25FAC70)
#define F30ADEECA06FAC2E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F30ADEECA06FAC2E_TypeDefinitionIndex = 5873;

class F30ADEECA06FAC2E : public ::System::Object
{
public:
	::System::UInt32 FFA1778C5451D00E; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F30ADEECA06FAC2E__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F30ADEECA06FAC2E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F30ADEECA06FAC2E*&))((::PBYTE)hIl2Cpp + F30ADEECA06FAC2E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
