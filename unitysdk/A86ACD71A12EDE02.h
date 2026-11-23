#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F40EB8947F163A2D.h"

class F27C671C4D25A95E;
namespace System { class Object; }
namespace System { class String; }

#define A86ACD71A12EDE02_A54BE52F56CA80C9_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A86ACD71A12EDE02_B2A7A454ACA3B6C3_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A86ACD71A12EDE02_BEB1F38D07F44529_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define A86ACD71A12EDE02__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EA8350)
#define A86ACD71A12EDE02__CTOR_OFFSET UNITYSDK_OFFSET(0x3EA83C0)

inline static constexpr unsigned int A86ACD71A12EDE02_TypeDefinitionIndex = 15028;

class A86ACD71A12EDE02 : public ::F40EB8947F163A2D
{
public:
	static ::A86ACD71A12EDE02** StaticGet_BD1EA225F8391F62()
	{
		return (::A86ACD71A12EDE02**)Il2CppClass::FromTypeDefinitionIndex(A86ACD71A12EDE02_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B2A7A454ACA3B6C3(::System::Object* AB7B3815D2FA84E2, ::System::Object* B083BE7841B347C4, ::System::String* FA01EC0C56CB1DBC)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + A86ACD71A12EDE02_B2A7A454ACA3B6C3_OFFSET))(AB7B3815D2FA84E2, B083BE7841B347C4, FA01EC0C56CB1DBC);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A86ACD71A12EDE02__CTOR_OFFSET))(this);
	}

	static ::System::Void A54BE52F56CA80C9(::System::Object* AB7B3815D2FA84E2, ::F27C671C4D25A95E* BDF806423E3BBB01, ::System::String* FA01EC0C56CB1DBC)
	{
		return ((::System::Void(*)(::System::Object*, ::F27C671C4D25A95E*, ::System::String*))((::PBYTE)hIl2Cpp + A86ACD71A12EDE02_A54BE52F56CA80C9_OFFSET))(AB7B3815D2FA84E2, BDF806423E3BBB01, FA01EC0C56CB1DBC);
	}

	static ::System::Boolean BEB1F38D07F44529()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + A86ACD71A12EDE02_BEB1F38D07F44529_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A86ACD71A12EDE02__CCTOR_OFFSET))();
	}
};
