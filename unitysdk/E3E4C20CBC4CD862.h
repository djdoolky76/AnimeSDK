#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BC956DE9CE9551AE.h"

class A842050E314079D9;
class BFBD465CE2F1BC45;
class F08677DD76453A70;
namespace System { class String; }

#define E3E4C20CBC4CD862_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x18143B0)
#define E3E4C20CBC4CD862_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1814220)
#define E3E4C20CBC4CD862__CCTOR_OFFSET UNITYSDK_OFFSET(0x1814430)
#define E3E4C20CBC4CD862__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int E3E4C20CBC4CD862_TypeDefinitionIndex = 1105;

class E3E4C20CBC4CD862 : public ::BC956DE9CE9551AE
{
public:
	static ::System::String** StaticGet_B2A204654E0BBFC6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E3E4C20CBC4CD862_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::BFBD465CE2F1BC45* E14BAC98F5FBFA0D; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E3E4C20CBC4CD862__CCTOR_OFFSET))();
	}

	::System::Void A1E97155B145443C(::F08677DD76453A70* AB8FE31C478CB4A8, ::A842050E314079D9* AE2BDC9C3EE9F2F0, ::System::Boolean A6939CEFA5C3285D)
	{
		return ((::System::Void(*)(::PVOID, ::F08677DD76453A70*, ::A842050E314079D9*, ::System::Boolean))((::PBYTE)hIl2Cpp + E3E4C20CBC4CD862_A1E97155B145443C_OFFSET))(this, AB8FE31C478CB4A8, AE2BDC9C3EE9F2F0, A6939CEFA5C3285D);
	}

	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3E4C20CBC4CD862_A00773F95A03D4B7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3E4C20CBC4CD862__CTOR_OFFSET))(this);
	}
};
