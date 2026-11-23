#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define A0F58B9B33060B6E_A8F92E7B885B0E0B_OFFSET UNITYSDK_OFFSET(0x41C01D0)

inline static constexpr unsigned int A0F58B9B33060B6E_TypeDefinitionIndex = 20735;

class A0F58B9B33060B6E : public ::System::Object
{
public:
	static ::System::Boolean A8F92E7B885B0E0B(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + A0F58B9B33060B6E_A8F92E7B885B0E0B_OFFSET))(A288CB28FC2A6DA3);
	}
};
