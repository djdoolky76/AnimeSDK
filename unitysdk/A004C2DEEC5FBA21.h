#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A004C2DEEC5FBA21_B89A156AFC3DF748_OFFSET UNITYSDK_OFFSET(0x3CE3100)
#define A004C2DEEC5FBA21_FBFD4035CF198A32_OFFSET UNITYSDK_OFFSET(0x1E953D0)

inline static constexpr unsigned int A004C2DEEC5FBA21_TypeDefinitionIndex = 10622;

class A004C2DEEC5FBA21 : public ::System::Object
{
public:
	static ::System::Int32 B89A156AFC3DF748(::System::Int32 A3DBF74DD9ECE6FE)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + A004C2DEEC5FBA21_B89A156AFC3DF748_OFFSET))(A3DBF74DD9ECE6FE);
	}

	static ::System::Int32 FBFD4035CF198A32(::System::Int32 B9A3BD2247770964)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + A004C2DEEC5FBA21_FBFD4035CF198A32_OFFSET))(B9A3BD2247770964);
	}
};
