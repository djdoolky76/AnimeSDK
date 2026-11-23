#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E02F67C4CDC31CF5;
class EBDA1E8754ACD9FC;
class FAE126BD5FE568DD;
namespace System { class String; }

#define A2A92B2FFE2E2E5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2A92B2FFE2E2E5A_TypeDefinitionIndex = 9016;

class A2A92B2FFE2E2E5A : public ::System::Object
{
public:
	::FAE126BD5FE568DD* A4B816EA7C01B52E; // 0x10
	::E02F67C4CDC31CF5* A77BA3D9EBDF03DC; // 0x18
	::Il2CppArray<::System::Byte>* B400FAF5F192C6D9; // 0x20
	::System::String* AAD46A807EC9A97C; // 0x28
	::System::Boolean EFD3FF8ACC9BE04E; // 0x30
	::System::Byte _padding0[0x7];
	::EBDA1E8754ACD9FC* A5803BC80FF52916; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2A92B2FFE2E2E5A__CTOR_OFFSET))(this);
	}
};
