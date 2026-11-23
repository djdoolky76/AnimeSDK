#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF52BA61B7503140.h"

namespace System::Text { class StringBuilder; }

#define A6054489563AB103__CCTOR_OFFSET UNITYSDK_OFFSET(0x443EB60)
#define A6054489563AB103__CTOR_OFFSET UNITYSDK_OFFSET(0x443EC80)

inline static constexpr unsigned int A6054489563AB103_TypeDefinitionIndex = 19030;

class A6054489563AB103 : public ::BF52BA61B7503140
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_F059BE88A95C853F()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(A6054489563AB103_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_ABDD78D8C2155ABB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(A6054489563AB103_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Int32* StaticGet_B4F731FC9BC12E3A()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A6054489563AB103_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	::System::Text::StringBuilder* A7DD4522BD8BCD3F; // 0x10
	::Il2CppArray<::System::Int32>* B994D05068DA1A02; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A6054489563AB103__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6054489563AB103__CTOR_OFFSET))(this);
	}
};
