#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B35C01F7B7ACB4D5__CTOR_OFFSET UNITYSDK_OFFSET(0x3C89160)

inline static constexpr unsigned int B35C01F7B7ACB4D5_TypeDefinitionIndex = 10421;

class B35C01F7B7ACB4D5 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* AEB1B66343CBBCA4; // 0x10
	::B35C01F7B7ACB4D5* BE4767324BF80193; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B35C01F7B7ACB4D5__CTOR_OFFSET))(this);
	}
};
