#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A32E136DB1077CDB_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x3F04FF0)
#define A32E136DB1077CDB_AE83F516D38C8248_OFFSET UNITYSDK_OFFSET(0x3F05000)

inline static constexpr unsigned int A32E136DB1077CDB_TypeDefinitionIndex = 20892;

class A32E136DB1077CDB : public ::System::Object
{
public:
	static ::System::Object* A4A1CC3BB05C6254(::System::String* F1DA3CEDFEA65142)
	{
		return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + A32E136DB1077CDB_A4A1CC3BB05C6254_OFFSET))(F1DA3CEDFEA65142);
	}

	static ::System::String* AE83F516D38C8248(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + A32E136DB1077CDB_AE83F516D38C8248_OFFSET))(A86A90C31A146E9C);
	}
};
