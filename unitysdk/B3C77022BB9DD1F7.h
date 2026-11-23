#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B3C77022BB9DD1F7_AA55B248A21B007E_OFFSET UNITYSDK_OFFSET(0x3C0BBD0)
#define B3C77022BB9DD1F7__CTOR_OFFSET UNITYSDK_OFFSET(0x3C0BC80)

inline static constexpr unsigned int B3C77022BB9DD1F7_TypeDefinitionIndex = 11431;

class B3C77022BB9DD1F7 : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* FB7417C7242AC3F4; // 0x10
	::System::Int32 EC1AE4DF06CE4D31; // 0x18
	::System::Int32 B2B153D41778FA6F; // 0x1C
	::System::Int32 E74ABA698B49F473; // 0x20

	::System::Void _ctor(::Il2CppArray<::System::Int32>* FF71C2952A1D15A9, ::Il2CppArray<::System::Int32>* BFBB9E68B2EC0E44, ::System::Int32 B2B153D41778FA6F, ::System::Int32 E74ABA698B49F473)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + B3C77022BB9DD1F7__CTOR_OFFSET))(this, FF71C2952A1D15A9, BFBB9E68B2EC0E44, B2B153D41778FA6F, E74ABA698B49F473);
	}

	::System::Int32 AA55B248A21B007E(::System::Int32 BC82832C13A0CF7A)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B3C77022BB9DD1F7_AA55B248A21B007E_OFFSET))(this, BC82832C13A0CF7A);
	}
};
