#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HNIKKIMMLAN___C_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x17B12FF0)
#define HNIKKIMMLAN___C_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x17B13000)
#define HNIKKIMMLAN___C_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x17B13010)
#define HNIKKIMMLAN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B12FA0)
#define HNIKKIMMLAN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B12FE0)

inline static constexpr unsigned int HNIKKIMMLAN___c_TypeDefinitionIndex = 55078;

class HNIKKIMMLAN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HNIKKIMMLAN___c_TypeDefinitionIndex)->GetStaticField(0x3B130);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HNIKKIMMLAN___c_TypeDefinitionIndex)->GetStaticField(0x3B138);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HNIKKIMMLAN___c_TypeDefinitionIndex)->GetStaticField(0x3B140);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HNIKKIMMLAN___c_TypeDefinitionIndex)->GetStaticField(0x3B148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNIKKIMMLAN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN___C_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN___C_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Boolean LOPABKBANAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN___C_LOPABKBANAN_OFFSET))(this);
	}
};
