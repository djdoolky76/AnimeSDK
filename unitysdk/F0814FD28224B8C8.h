#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F0814FD28224B8C8_F3FBAA318535BAEA;
namespace System { class String; }

#define F0814FD28224B8C8_BA374C3A99ACA9C4_OFFSET UNITYSDK_OFFSET(0x3F05350)
#define F0814FD28224B8C8_E5DA2455581CE65A_OFFSET UNITYSDK_OFFSET(0x3F050D0)
#define F0814FD28224B8C8_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x3F054E0)
#define F0814FD28224B8C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F05460)
#define F0814FD28224B8C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0814FD28224B8C8_TypeDefinitionIndex = 20912;

class F0814FD28224B8C8 : public ::System::Object
{
public:
	static ::F0814FD28224B8C8** StaticGet_F2EC524D6D748B5F()
	{
		return (::F0814FD28224B8C8**)Il2CppClass::FromTypeDefinitionIndex(F0814FD28224B8C8_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Object** StaticGet_BCBD49F75931A59A()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(F0814FD28224B8C8_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0814FD28224B8C8__CTOR_OFFSET))(this);
	}

	static ::F0814FD28224B8C8* F7B0A23335A3DB16()
	{
		return ((::F0814FD28224B8C8*(*)())((::PBYTE)hIl2Cpp + F0814FD28224B8C8_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void BA374C3A99ACA9C4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0814FD28224B8C8_BA374C3A99ACA9C4_OFFSET))(this);
	}

	::System::Void E5DA2455581CE65A(::Il2CppArray<::System::String*>* E727EECE2D84A736, ::F0814FD28224B8C8_F3FBAA318535BAEA* F76D958C4E3431F5)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::F0814FD28224B8C8_F3FBAA318535BAEA*))((::PBYTE)hIl2Cpp + F0814FD28224B8C8_E5DA2455581CE65A_OFFSET))(this, E727EECE2D84A736, F76D958C4E3431F5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F0814FD28224B8C8__CCTOR_OFFSET))();
	}
};
