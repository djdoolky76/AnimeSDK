#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E945252ECE50FE4E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A901C317B4107BE8_FF2A8F5DE4323C0A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DB30)

inline static constexpr unsigned int A901C317B4107BE8_FF2A8F5DE4323C0A_TypeDefinitionIndex = 9617;

class A901C317B4107BE8_FF2A8F5DE4323C0A : public ::System::Object
{
public:
	::System::Boolean EFF318ACD7DE6B55; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::E945252ECE50FE4E*>* A4B614CDF0A112C0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A901C317B4107BE8_FF2A8F5DE4323C0A__CTOR_OFFSET))(this);
	}
};
