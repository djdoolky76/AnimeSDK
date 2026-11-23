#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define E1A80A10AD3FE1DF_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1F9E2A0)
#define E1A80A10AD3FE1DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E1A80A10AD3FE1DF_TypeDefinitionIndex = 4765;

class E1A80A10AD3FE1DF : public ::System::Object
{
public:
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E1A80A10AD3FE1DF*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E1A80A10AD3FE1DF*&))((::PBYTE)hIl2Cpp + E1A80A10AD3FE1DF_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1A80A10AD3FE1DF__CTOR_OFFSET))(this);
	}
};
