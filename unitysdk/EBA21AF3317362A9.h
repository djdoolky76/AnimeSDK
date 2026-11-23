#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define EBA21AF3317362A9_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1F9E2A0)
#define EBA21AF3317362A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EBA21AF3317362A9_TypeDefinitionIndex = 2394;

class EBA21AF3317362A9 : public ::System::Object
{
public:
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EBA21AF3317362A9*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EBA21AF3317362A9*&))((::PBYTE)hIl2Cpp + EBA21AF3317362A9_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBA21AF3317362A9__CTOR_OFFSET))(this);
	}
};
