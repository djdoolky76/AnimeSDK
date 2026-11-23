#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF52BA61B7503140.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define E458F3239F79A40A__CCTOR_OFFSET UNITYSDK_OFFSET(0x4452520)
#define E458F3239F79A40A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4452800)
#define E458F3239F79A40A__CTOR_2_OFFSET UNITYSDK_OFFSET(0x4452660)
#define E458F3239F79A40A__CTOR_OFFSET UNITYSDK_OFFSET(0x4452740)

inline static constexpr unsigned int E458F3239F79A40A_TypeDefinitionIndex = 19047;

class E458F3239F79A40A : public ::BF52BA61B7503140
{
public:
	static ::System::String** StaticGet_B9358D9A0907996B()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E458F3239F79A40A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_EB55D6DAB3AEA8C2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E458F3239F79A40A_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_ABDD78D8C2155ABB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(E458F3239F79A40A_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Int32* StaticGet_B4F731FC9BC12E3A()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E458F3239F79A40A_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	::System::Boolean F857D383FE5F3AC3; // 0x10
	::System::Boolean F79492A4A1919758; // 0x11
	::System::Byte _padding0[0x6];
	::System::Text::StringBuilder* A7DD4522BD8BCD3F; // 0x18
	::Il2CppArray<::System::Int32>* B994D05068DA1A02; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E458F3239F79A40A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E458F3239F79A40A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean F857D383FE5F3AC3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E458F3239F79A40A__CTOR_1_OFFSET))(this, F857D383FE5F3AC3);
	}

	::System::Void _ctor_2(::System::Boolean F857D383FE5F3AC3, ::System::Boolean F79492A4A1919758)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + E458F3239F79A40A__CTOR_2_OFFSET))(this, F857D383FE5F3AC3, F79492A4A1919758);
	}
};
