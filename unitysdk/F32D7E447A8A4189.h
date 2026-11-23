#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BC956DE9CE9551AE.h"

class A842050E314079D9;
class F08677DD76453A70;
namespace System { class String; }

#define F32D7E447A8A4189_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x23C69E0)
#define F32D7E447A8A4189__CCTOR_OFFSET UNITYSDK_OFFSET(0x23C6AD0)
#define F32D7E447A8A4189__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int F32D7E447A8A4189_TypeDefinitionIndex = 3803;

class F32D7E447A8A4189 : public ::BC956DE9CE9551AE
{
public:
	static ::System::String** StaticGet_B2A204654E0BBFC6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F32D7E447A8A4189_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F32D7E447A8A4189__CCTOR_OFFSET))();
	}

	::System::Void A1E97155B145443C(::F08677DD76453A70* AB8FE31C478CB4A8, ::A842050E314079D9* AE2BDC9C3EE9F2F0, ::System::Boolean A6939CEFA5C3285D)
	{
		return ((::System::Void(*)(::PVOID, ::F08677DD76453A70*, ::A842050E314079D9*, ::System::Boolean))((::PBYTE)hIl2Cpp + F32D7E447A8A4189_A1E97155B145443C_OFFSET))(this, AB8FE31C478CB4A8, AE2BDC9C3EE9F2F0, A6939CEFA5C3285D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F32D7E447A8A4189__CTOR_OFFSET))(this);
	}
};
