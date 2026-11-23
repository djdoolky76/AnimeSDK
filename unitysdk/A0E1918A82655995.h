#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BC956DE9CE9551AE.h"

class A842050E314079D9;
class BA2EC9997631A2A0;
class F08677DD76453A70;
namespace System { class String; }

#define A0E1918A82655995_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x1973E30)
#define A0E1918A82655995_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1973CA0)
#define A0E1918A82655995__CCTOR_OFFSET UNITYSDK_OFFSET(0x1973E80)
#define A0E1918A82655995__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int A0E1918A82655995_TypeDefinitionIndex = 1625;

class A0E1918A82655995 : public ::BC956DE9CE9551AE
{
public:
	static ::System::String** StaticGet_B2A204654E0BBFC6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A0E1918A82655995_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::BA2EC9997631A2A0* E14BAC98F5FBFA0D; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0E1918A82655995__CTOR_OFFSET))(this);
	}

	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0E1918A82655995_A00773F95A03D4B7_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::F08677DD76453A70* AB8FE31C478CB4A8, ::A842050E314079D9* AE2BDC9C3EE9F2F0, ::System::Boolean A6939CEFA5C3285D)
	{
		return ((::System::Void(*)(::PVOID, ::F08677DD76453A70*, ::A842050E314079D9*, ::System::Boolean))((::PBYTE)hIl2Cpp + A0E1918A82655995_A1E97155B145443C_OFFSET))(this, AB8FE31C478CB4A8, AE2BDC9C3EE9F2F0, A6939CEFA5C3285D);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0E1918A82655995__CCTOR_OFFSET))();
	}
};
