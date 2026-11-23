#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F8278C590A921EB7_EA500F351493EC74_OFFSET UNITYSDK_OFFSET(0x3B80080)

inline static constexpr unsigned int F8278C590A921EB7_TypeDefinitionIndex = 11040;

class F8278C590A921EB7 : public ::System::Object
{
public:
	static ::System::String* EA500F351493EC74(::System::Object* A5C299C395D3E1B2, ::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::String*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + F8278C590A921EB7_EA500F351493EC74_OFFSET))(A5C299C395D3E1B2, E937D4885DAA1AE8);
	}
};
