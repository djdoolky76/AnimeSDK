#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KBOCBACPBFE___C_GDKBNFCDLHJ_OFFSET UNITYSDK_OFFSET(0x130A94B0)
#define KBOCBACPBFE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130A9460)
#define KBOCBACPBFE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130A94A0)

inline static constexpr unsigned int KBOCBACPBFE___c_TypeDefinitionIndex = 89574;

class KBOCBACPBFE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBOCBACPBFE___c_TypeDefinitionIndex)->GetStaticField(0x41060);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KBOCBACPBFE___c_TypeDefinitionIndex)->GetStaticField(0x41068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBOCBACPBFE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOCBACPBFE___C__CTOR_OFFSET))(this);
	}

	::System::String* GDKBNFCDLHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOCBACPBFE___C_GDKBNFCDLHJ_OFFSET))(this);
	}
};
