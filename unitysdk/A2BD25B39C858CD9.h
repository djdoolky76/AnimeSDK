#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F88B82A458EA2191;
namespace System { class String; }

#define A2BD25B39C858CD9_E6FFCC95791B7633_OFFSET UNITYSDK_OFFSET(0x2435380)
#define A2BD25B39C858CD9_F0EEE5D90B9E7EB0_OFFSET UNITYSDK_OFFSET(0x2435170)
#define A2BD25B39C858CD9__CCTOR_OFFSET UNITYSDK_OFFSET(0x2435920)
#define A2BD25B39C858CD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2BD25B39C858CD9_TypeDefinitionIndex = 4211;

class A2BD25B39C858CD9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_ECB0AF27716360D2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A2BD25B39C858CD9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_F25A6CFA3081F83A()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A2BD25B39C858CD9_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_B54B12C5E221CD10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A2BD25B39C858CD9_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::F88B82A458EA2191** StaticGet_BFFD16E9FA8EF306()
	{
		return (::F88B82A458EA2191**)Il2CppClass::FromTypeDefinitionIndex(A2BD25B39C858CD9_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::String** StaticGet_F7BA9AA360278E58()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A2BD25B39C858CD9_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A2BD25B39C858CD9__CCTOR_OFFSET))();
	}

	static ::System::Boolean E6FFCC95791B7633()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + A2BD25B39C858CD9_E6FFCC95791B7633_OFFSET))();
	}

	static ::System::Boolean F0EEE5D90B9E7EB0(::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + A2BD25B39C858CD9_F0EEE5D90B9E7EB0_OFFSET))(F79B4D487F303AB2, E83E519C5C42896F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2BD25B39C858CD9__CTOR_OFFSET))(this);
	}
};
