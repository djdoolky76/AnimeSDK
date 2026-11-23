#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define EA158B20E7D0766D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25C07F0)
#define EA158B20E7D0766D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EA158B20E7D0766D_TypeDefinitionIndex = 5508;

class EA158B20E7D0766D : public ::System::Object
{
public:
	::System::UInt32 E7AD5DA77BB56EFB; // 0x10
	::System::Int32 B790FC3F5B7AAF87; // 0x14

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EA158B20E7D0766D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EA158B20E7D0766D*&))((::PBYTE)hIl2Cpp + EA158B20E7D0766D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA158B20E7D0766D__CTOR_OFFSET))(this);
	}
};
