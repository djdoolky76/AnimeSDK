#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MGFOIGBKEHH___C_ADDBJGDAGBB_OFFSET UNITYSDK_OFFSET(0x16C7F2F0)
#define MGFOIGBKEHH___C_BJEKBANLMLE_OFFSET UNITYSDK_OFFSET(0x16C7F2E0)
#define MGFOIGBKEHH___C_FDNIFJAGMBC_OFFSET UNITYSDK_OFFSET(0x16C7F2D0)
#define MGFOIGBKEHH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C7F280)
#define MGFOIGBKEHH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7F2C0)

inline static constexpr unsigned int MGFOIGBKEHH___c_TypeDefinitionIndex = 72199;

class MGFOIGBKEHH___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MGFOIGBKEHH___c_TypeDefinitionIndex)->GetStaticField(0x3BC80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MGFOIGBKEHH___c_TypeDefinitionIndex)->GetStaticField(0x3BC88);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_6()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MGFOIGBKEHH___c_TypeDefinitionIndex)->GetStaticField(0x3BC90);
	}
	static ::System::Action** StaticGet___9__7_16()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MGFOIGBKEHH___c_TypeDefinitionIndex)->GetStaticField(0x3BC98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGFOIGBKEHH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFOIGBKEHH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean FDNIFJAGMBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFOIGBKEHH___C_FDNIFJAGMBC_OFFSET))(this);
	}

	::System::Boolean BJEKBANLMLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFOIGBKEHH___C_BJEKBANLMLE_OFFSET))(this);
	}

	::System::Void ADDBJGDAGBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFOIGBKEHH___C_ADDBJGDAGBB_OFFSET))(this);
	}
};
