#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define E8839B94DBF1430A_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1F9E2A0)
#define E8839B94DBF1430A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8839B94DBF1430A_TypeDefinitionIndex = 2651;

class E8839B94DBF1430A : public ::System::Object
{
public:
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E8839B94DBF1430A*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E8839B94DBF1430A*&))((::PBYTE)hIl2Cpp + E8839B94DBF1430A_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8839B94DBF1430A__CTOR_OFFSET))(this);
	}
};
