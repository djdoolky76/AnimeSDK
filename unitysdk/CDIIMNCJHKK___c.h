#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CDIIMNCJHKK___C_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x13254CB0)
#define CDIIMNCJHKK___C_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x13254D00)
#define CDIIMNCJHKK___C_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x13254CC0)
#define CDIIMNCJHKK___C_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x13254D10)
#define CDIIMNCJHKK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13254C60)
#define CDIIMNCJHKK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13254CA0)

inline static constexpr unsigned int CDIIMNCJHKK___c_TypeDefinitionIndex = 56597;

class CDIIMNCJHKK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CDIIMNCJHKK___c_TypeDefinitionIndex)->GetStaticField(0x42FB0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CDIIMNCJHKK___c_TypeDefinitionIndex)->GetStaticField(0x42FB8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CDIIMNCJHKK___c_TypeDefinitionIndex)->GetStaticField(0x42FC0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CDIIMNCJHKK___c_TypeDefinitionIndex)->GetStaticField(0x42FC8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CDIIMNCJHKK___c_TypeDefinitionIndex)->GetStaticField(0x42FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDIIMNCJHKK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIIMNCJHKK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AMABEFBJFAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIIMNCJHKK___C_AMABEFBJFAA_OFFSET))(this);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIIMNCJHKK___C_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIIMNCJHKK___C_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::String* LOPABKBANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIIMNCJHKK___C_LOPABKBANAN_OFFSET))(this);
	}
};
