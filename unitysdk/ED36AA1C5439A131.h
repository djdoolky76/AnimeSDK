#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BC956DE9CE9551AE.h"

class A842050E314079D9;
class F08677DD76453A70;
namespace System { class String; }

#define ED36AA1C5439A131_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x26175E0)
#define ED36AA1C5439A131__CCTOR_OFFSET UNITYSDK_OFFSET(0x26176D0)
#define ED36AA1C5439A131__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int ED36AA1C5439A131_TypeDefinitionIndex = 5978;

class ED36AA1C5439A131 : public ::BC956DE9CE9551AE
{
public:
	static ::System::String** StaticGet_B2A204654E0BBFC6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ED36AA1C5439A131_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void A1E97155B145443C(::F08677DD76453A70* AB8FE31C478CB4A8, ::A842050E314079D9* AE2BDC9C3EE9F2F0, ::System::Boolean A6939CEFA5C3285D)
	{
		return ((::System::Void(*)(::PVOID, ::F08677DD76453A70*, ::A842050E314079D9*, ::System::Boolean))((::PBYTE)hIl2Cpp + ED36AA1C5439A131_A1E97155B145443C_OFFSET))(this, AB8FE31C478CB4A8, AE2BDC9C3EE9F2F0, A6939CEFA5C3285D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED36AA1C5439A131__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED36AA1C5439A131__CCTOR_OFFSET))();
	}
};
