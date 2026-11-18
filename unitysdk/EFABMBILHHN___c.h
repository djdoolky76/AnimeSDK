#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define EFABMBILHHN___C_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x1414A0E0)
#define EFABMBILHHN___C_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x1414A090)
#define EFABMBILHHN___C_KPHHMFNGOAM_OFFSET UNITYSDK_OFFSET(0x1414A0A0)
#define EFABMBILHHN___C_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x1414A0F0)
#define EFABMBILHHN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1414A040)
#define EFABMBILHHN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1414A080)

inline static constexpr unsigned int EFABMBILHHN___c_TypeDefinitionIndex = 55393;

class EFABMBILHHN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EFABMBILHHN___c_TypeDefinitionIndex)->GetStaticField(0x37510);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EFABMBILHHN___c_TypeDefinitionIndex)->GetStaticField(0x37518);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_6()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EFABMBILHHN___c_TypeDefinitionIndex)->GetStaticField(0x37520);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EFABMBILHHN___c_TypeDefinitionIndex)->GetStaticField(0x37528);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EFABMBILHHN___c_TypeDefinitionIndex)->GetStaticField(0x37530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFABMBILHHN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFABMBILHHN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFABMBILHHN___C_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::String* KPHHMFNGOAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFABMBILHHN___C_KPHHMFNGOAM_OFFSET))(this);
	}

	::System::Boolean HPPLBNIKOLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFABMBILHHN___C_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Boolean LOPABKBANAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFABMBILHHN___C_LOPABKBANAN_OFFSET))(this);
	}
};
