#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define B1B03E6541176137_A42BDB63AA5F57A8_OFFSET UNITYSDK_OFFSET(0x3C00270)
#define B1B03E6541176137_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x2EC5BF0)
#define B1B03E6541176137_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3C00240)
#define B1B03E6541176137__CTOR_OFFSET UNITYSDK_OFFSET(0x3C00300)

inline static constexpr unsigned int B1B03E6541176137_TypeDefinitionIndex = 11373;

class B1B03E6541176137
{
public:
	::System::Int32 A42BDB63AA5F57A8(::Il2CppArray<::System::String*>* EDF8D5B13A3EE433, ::System::String* E937D4885DAA1AE8, ::System::Int32 B11388950C465AE2, ::System::Int32 A70E5C58B2C7A692)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + B1B03E6541176137_A42BDB63AA5F57A8_OFFSET))(this, EDF8D5B13A3EE433, E937D4885DAA1AE8, B11388950C465AE2, A70E5C58B2C7A692);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1B03E6541176137__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::String* BB8C609F76620E45, ::System::String* A0A0D02932F12CFD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B1B03E6541176137_FC3208D7B8C7EE04_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	::System::Int32 B996A70283B60FAC(::System::String* A86A90C31A146E9C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B1B03E6541176137_B996A70283B60FAC_OFFSET))(this, A86A90C31A146E9C);
	}
};
