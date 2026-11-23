#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F48FEA091C9EC147_AE070F4600251841_OFFSET UNITYSDK_OFFSET(0x3BA22C0)
#define F48FEA091C9EC147_E556D6EA12FA3750_OFFSET UNITYSDK_OFFSET(0x3BA22B0)

inline static constexpr unsigned int F48FEA091C9EC147_TypeDefinitionIndex = 11117;

class F48FEA091C9EC147 : public ::System::Object
{
public:
	static ::System::UInt32 E556D6EA12FA3750()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + F48FEA091C9EC147_E556D6EA12FA3750_OFFSET))();
	}

	static ::System::Int32 AE070F4600251841(::System::UInt32 E9C5440C982B806D, ::System::Int32 E5E09F91DA49226F)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + F48FEA091C9EC147_AE070F4600251841_OFFSET))(E9C5440C982B806D, E5E09F91DA49226F);
	}
};
