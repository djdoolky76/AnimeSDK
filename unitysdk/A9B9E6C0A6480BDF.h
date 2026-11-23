#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A9B9E6C0A6480BDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9B9E6C0A6480BDF_TypeDefinitionIndex = 20317;

class A9B9E6C0A6480BDF : public ::System::Object
{
public:
	::System::Int32 EEF512E05B6F9571; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Int32>* E47344267101A10E; // 0x18
	::System::Int32 FA5545FCA0711CBC; // 0x20
	::System::Int32 ABAF91F1397D75A1; // 0x24
	::Il2CppArray<::System::Int32>* B335D08CBB825570; // 0x28
	::Il2CppArray<::System::Int32>* A016EB53104F5767; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9B9E6C0A6480BDF__CTOR_OFFSET))(this);
	}
};
