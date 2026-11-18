#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GFFKGFBNNPI___C_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x15F19160)
#define GFFKGFBNNPI___C_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x15F19180)
#define GFFKGFBNNPI___C_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x15F19170)
#define GFFKGFBNNPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F19110)
#define GFFKGFBNNPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F19150)

inline static constexpr unsigned int GFFKGFBNNPI___c_TypeDefinitionIndex = 72738;

class GFFKGFBNNPI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GFFKGFBNNPI___c_TypeDefinitionIndex)->GetStaticField(0x44120);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GFFKGFBNNPI___c_TypeDefinitionIndex)->GetStaticField(0x44128);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GFFKGFBNNPI___c_TypeDefinitionIndex)->GetStaticField(0x44130);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GFFKGFBNNPI___c_TypeDefinitionIndex)->GetStaticField(0x44138);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFKGFBNNPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKGFBNNPI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AMABEFBJFAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKGFBNNPI___C_AMABEFBJFAA_OFFSET))(this);
	}

	::System::Boolean LOPABKBANAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKGFBNNPI___C_LOPABKBANAN_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKGFBNNPI___C_IPCDDNMMKPF_OFFSET))(this);
	}
};
