#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define E1D90B21C8006EBF_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1F9E2A0)
#define E1D90B21C8006EBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E1D90B21C8006EBF_TypeDefinitionIndex = 4927;

class E1D90B21C8006EBF : public ::System::Object
{
public:
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E1D90B21C8006EBF*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E1D90B21C8006EBF*&))((::PBYTE)hIl2Cpp + E1D90B21C8006EBF_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1D90B21C8006EBF__CTOR_OFFSET))(this);
	}
};
