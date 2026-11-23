#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF52BA61B7503140.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define E3A96F4D88023586__CCTOR_OFFSET UNITYSDK_OFFSET(0x441FA00)
#define E3A96F4D88023586__CTOR_1_OFFSET UNITYSDK_OFFSET(0x441FC30)
#define E3A96F4D88023586__CTOR_OFFSET UNITYSDK_OFFSET(0x441FB70)

inline static constexpr unsigned int E3A96F4D88023586_TypeDefinitionIndex = 18946;

class E3A96F4D88023586 : public ::BF52BA61B7503140
{
public:
	static ::System::String** StaticGet_B9358D9A0907996B()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E3A96F4D88023586_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_F059BE88A95C853F()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(E3A96F4D88023586_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_ABDD78D8C2155ABB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(E3A96F4D88023586_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_A7C53A075D07ED3F()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(E3A96F4D88023586_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	::System::Boolean F857D383FE5F3AC3; // 0x10
	::System::Byte _padding0[0x7];
	::System::Text::StringBuilder* A7DD4522BD8BCD3F; // 0x18
	::Il2CppArray<::System::Int32>* B994D05068DA1A02; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3A96F4D88023586__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E3A96F4D88023586__CCTOR_OFFSET))();
	}

	::System::Void _ctor_1(::System::Boolean F857D383FE5F3AC3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E3A96F4D88023586__CTOR_1_OFFSET))(this, F857D383FE5F3AC3);
	}
};
