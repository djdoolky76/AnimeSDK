#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define F9874422644484EC_E2D1BAD6F90EB2D9_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x2944BB0)
#define F9874422644484EC_E2D1BAD6F90EB2D9_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2944B00)

inline static constexpr unsigned int F9874422644484EC_E2D1BAD6F90EB2D9_TypeDefinitionIndex = 15337;

struct alignas(8) F9874422644484EC_E2D1BAD6F90EB2D9
{
	::System::String* AEFE9D3C411C7F79; // 0x10
	::System::Int32 E9EF1688081C3B62; // 0x18

	::System::Boolean FC3208D7B8C7EE04(::System::Object* F834E23149D687A5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F9874422644484EC_E2D1BAD6F90EB2D9_FC3208D7B8C7EE04_OFFSET))(this, F834E23149D687A5);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F9874422644484EC_E2D1BAD6F90EB2D9_B996A70283B60FAC_OFFSET))(this);
	}
};
