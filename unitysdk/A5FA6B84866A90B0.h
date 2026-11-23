#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define A5FA6B84866A90B0_B3B8AA3ECC977ED4_OFFSET UNITYSDK_OFFSET(0x3FC1B00)
#define A5FA6B84866A90B0_F095A189DDEAE5BC_OFFSET UNITYSDK_OFFSET(0x3FC1630)
#define A5FA6B84866A90B0_FF6153D4B507BFC0_OFFSET UNITYSDK_OFFSET(0x3FC11C0)

inline static constexpr unsigned int A5FA6B84866A90B0_TypeDefinitionIndex = 14342;

class A5FA6B84866A90B0 : public ::System::Object
{
public:
	static ::System::Type* FF6153D4B507BFC0(::System::Type* A288CB28FC2A6DA3, ::System::Type* F8AFDCC350CFCAB0, ::System::Int32 E3E489B09B465DBE)
	{
		return ((::System::Type*(*)(::System::Type*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + A5FA6B84866A90B0_FF6153D4B507BFC0_OFFSET))(A288CB28FC2A6DA3, F8AFDCC350CFCAB0, E3E489B09B465DBE);
	}

	static ::System::Type* B3B8AA3ECC977ED4(::System::Reflection::MemberInfo* F7E0282B5F145F26)
	{
		return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + A5FA6B84866A90B0_B3B8AA3ECC977ED4_OFFSET))(F7E0282B5F145F26);
	}

	static ::System::String* F095A189DDEAE5BC(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + A5FA6B84866A90B0_F095A189DDEAE5BC_OFFSET))(A288CB28FC2A6DA3);
	}
};
