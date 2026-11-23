#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A1D6A6889FBA25E5;
class A76547D916F2DC96;
class F85E9E1EC79218CF;
namespace System { class String; }

#define F74A04D385941DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F74A04D385941DBC_TypeDefinitionIndex = 6692;

class F74A04D385941DBC : public ::System::Object
{
public:
	::A1D6A6889FBA25E5* A4B816EA7C01B52E; // 0x10
	::Il2CppArray<::System::Byte>* B400FAF5F192C6D9; // 0x18
	::System::String* AAD46A807EC9A97C; // 0x20
	::System::Boolean EFD3FF8ACC9BE04E; // 0x28
	::System::Byte _padding0[0x7];
	::F85E9E1EC79218CF* B8D8CDE01FB0B70B; // 0x30
	::A76547D916F2DC96* A586484D4D5A7B98; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F74A04D385941DBC__CTOR_OFFSET))(this);
	}
};
