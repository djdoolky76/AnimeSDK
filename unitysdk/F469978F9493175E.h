#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A1D6A6889FBA25E5;
namespace System { class String; }

#define F469978F9493175E_A997D11E6E1E725C_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define F469978F9493175E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F469978F9493175E_TypeDefinitionIndex = 6891;

class F469978F9493175E : public ::System::Object
{
public:
	::A1D6A6889FBA25E5* A4B816EA7C01B52E; // 0x10
	::Il2CppArray<::System::Byte>* B400FAF5F192C6D9; // 0x18
	::System::String* AAD46A807EC9A97C; // 0x20
	::Il2CppArray<::System::Byte>* FABA4279D7929735; // 0x28

	::System::Void A997D11E6E1E725C(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F469978F9493175E_A997D11E6E1E725C_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F469978F9493175E__CTOR_OFFSET))(this);
	}
};
