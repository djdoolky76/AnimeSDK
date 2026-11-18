#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BFOFPJFBKAF___C_AMJGJEHFGFP_OFFSET UNITYSDK_OFFSET(0x18232F40)
#define BFOFPJFBKAF___C_JNDBGCEPKGJ_OFFSET UNITYSDK_OFFSET(0x18232F50)
#define BFOFPJFBKAF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18232EF0)
#define BFOFPJFBKAF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18232F30)

inline static constexpr unsigned int BFOFPJFBKAF___c_TypeDefinitionIndex = 47170;

class BFOFPJFBKAF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__4_6()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BFOFPJFBKAF___c_TypeDefinitionIndex)->GetStaticField(0x40070);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BFOFPJFBKAF___c_TypeDefinitionIndex)->GetStaticField(0x40078);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BFOFPJFBKAF___c_TypeDefinitionIndex)->GetStaticField(0x40080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFOFPJFBKAF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOFPJFBKAF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AMJGJEHFGFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOFPJFBKAF___C_AMJGJEHFGFP_OFFSET))(this);
	}

	::System::Boolean JNDBGCEPKGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOFPJFBKAF___C_JNDBGCEPKGJ_OFFSET))(this);
	}
};
